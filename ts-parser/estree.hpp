#ifndef ESTREE_H
#define ESTREE_H
#pragma once

#include <optional>
#include <string>
#include <vector>
#include <variant>

namespace cyclone::parser
{

	using std::string;
	using Range = std::pair<int, int>;
	using ssize_t = long long;
	template <typename T>
	using Array = std::vector<T>;

	struct Position
	{
		ssize_t line;
		ssize_t column;
	};

	struct SourceLocation
	{
		string source;
		Position strart;
		Position end;
	};
	struct BaseNodeWithoutComments
	{
		string type;
		SourceLocation loc;
		Range range;
	};

	enum class CommentType
	{
		Line,
		Block,
	};

	struct Comment
	{
		CommentType type;
		string value;
	};

	struct BaseNode : BaseNodeWithoutComments
	{
		Array<Comment> leadingComments;
		Array<Comment> trailingComments;
	};

	enum class SourceType
	{
		script,
		module,
	};

	struct Program : BaseNode
	{
		SourceType sourceType;
		Array<Statement> body;
		Array<Comment> comments;
	};

	struct Statement : BaseNodeWithoutComments
	{
	};

	template <typename LiteralType>
	struct Directive : BaseNode
	{
		LiteralType expression;
		string directive;
	};

	template <typename T>
	struct BaseFunction
	{
		BaseFunction(T)
		{
		}
		Array<ParamType> params;
		bool generator;
		bool async;
		BodyType body;
	};

	enum class FunctionTypeId
	{
		FunctionDeclaration,
		FunctionExpression,
		ArrowFunctionExpression

	};

	struct BaseStatement : BaseNode
	{
	};

	struct EmptyStatement : BaseStatement
	{
	};

	template <typename BodyType>
	struct BlockStatement : BaseStatement

	{
		Array body;
		Array innerComments;
	};

	template <typename ExpressionType>
	struct ExpressionStatement : BaseStatement
	{
		ExpressionType expression;
	};

} // namespace cyclone::parser
#endif