#include<regex>

/* External File System Commands */
std::regex help("\\s*(help)\\s*");
std::regex fdisk("\\s*(fdisk)\\s*");
std::regex dump_rel("\\s*(dump)\\s+(relcat)\\s*");
std::regex dump_attr("\\s*(dump)\\s+(attrcat)\\s*");
std::regex dump_bmap("\\s*(dump)\\s+(bmap)\\s*");
std::regex imp("\\s*(import)\\s+([a-zA-Z0-9_-]+\\.csv)\\s*");
std::regex expo("\\s*(export)\\s+([A-Za-z0-9_-]+)\\s+([a-zA-Z0-9_-]+\\.csv)\\s*");
std::regex list_all("\\s*(ls|LS)\\s*");
std::regex ex("\\s*(EXIT|exit)\\s*\\s*");

/* DDL Commands*/
std::regex create_table(
		"\\s*(CREATE|create)\\s+(TABLE|table)\\s+([A-Za-z0-9_-]+)\\s*\\(\\s*([A-Za-z0-9_-]+\\s+(INT|STR|FLOAT),\\s*)*([A-Za-z0-9_-]+\\s+(INT|STR|FLOAT))\\s*\\)\\s*");
std::regex drop_table("\\s*(DROP|drop)\\s+(TABLE|table)\\s+([A-Za-z0-9_-]+)\\s*");
std::regex open_table("\\s*(OPEN|open)\\s+(TABLE|table)\\s+([A-Za-z0-9_-]+)\\s*");
std::regex close_table("\\s*(CLOSE|close)\\s+(TABLE|table)\\s+([A-Za-z0-9_-]+)\\s*");
std::regex create_index(
		"\\s*(CREATE|create)\\s+(INDEX|index)\\s+(ON|on)\\s+([A-Za-z0-9_-]+)\\s*\\.\\s*([A-Za-z0-9_-]+)\\s*");
std::regex drop_index(
		"\\s*(DROP|drop)\\s+(INDEX|index)\\s+(ON|on)\\s+([A-Za-z0-9_-]+)\\s*\\.\\s*([A-Za-z0-9_-]+)\\s*");
std::regex rename_table(
		"\\s*(ALTER|alter)\\s+(TABLE|table)\\s+(RENAME|rename)\\s+([a-zA-Z0-9_-]+)\\s+(TO|to)\\s+([a-zA-Z0-9_-]+)\\s*");
std::regex rename_column(
		"\\s*(ALTER|alter)\\s+(TABLE|table)\\s+(RENAME|rename)\\s+([a-zA-Z0-9_-]+)\\s+(COLUMN|column)\\s+([a-zA-Z0-9_-]+)\\s+(TO|to)\\s+([a-zA-Z0-9_-]+)\\s*");

/* DML Commands */
std::regex select_from(
		"\\s*(select|SELECT)\\s+([*])\\s+(FROM|from)\\s+([A-Za-z0-9_-]+)\\s+(INTO|into)\\s+([A-Za-z0-9_-]+)\\s*");
std::regex select_attr_from(
		"\\s*(select|SELECT)\\s+([A-Za-z0-9_-]+\\s*,\\s*)*[A-Za-z0-9_-]+\\s+(FROM|from)\\s+([A-Za-z0-9_-]+)\\s+(INTO|into)\\s+([A-Za-z0-9_-]+)\\s*");
std::regex select_from_where(
		"\\s*(select|SELECT)\\s+([*])\\s+(FROM|from)\\s+([A-Za-z0-9_-]+)\\s+(INTO|into)\\s+([A-Za-z0-9_-]+)\\s+(WHERE|where)\\s+([A-Za-z0-9_-]+)\\s*(<|<=|>|>=|=|!=)\\s*([A-Za-z0-9_-]+|([0-9]+(\\.)[0-9]+))\\s*");
std::regex select_attr_from_where(
		"\\s*(select|SELECT)\\s+([A-Za-z0-9_-]+\\s*,\\s*)*[A-Za-z0-9_-]+\\s+(FROM|from)\\s+([A-Za-z0-9_-]+)\\s+(INTO|into)\\s+([A-Za-z0-9_-]+)\\s+(WHERE|where)\\s+([A-Za-z0-9_-]+)\\s*(<|<=|>|>=|=|!=)\\s*([A-Za-z0-9_-]+|([0-9]+(\\.)[0-9]+))\\s*");
std::regex select_from_join(
		"\\s*(select|SELECT)\\s+([*])\\s+(FROM|from)\\s+([A-Za-z0-9_-]+)\\s+(JOIN|join)\\s+([A-Za-z0-9_-]+)\\s+(INTO|into)\\s+([A-Za-z0-9_-]+)\\s+(WHERE|where)\\s+([A-Za-z0-9_-]+)\\s*\\.([A-Za-z0-9_-]+)\\s*\\=\\s*([A-Za-z0-9_-]+)\\s*\\.([A-Za-z0-9_-]+)\\s*");
std::regex select_attr_from_join(
		"\\s*(select|SELECT)\\s+([A-Za-z0-9_-]+\\s*,\\s*)*[A-Za-z0-9_-]+\\s+(FROM|from)\\s+([A-Za-z0-9_-]+)\\s+(JOIN|join)\\s+([A-Za-z0-9_-]+)\\s+(INTO|into)\\s+([A-Za-z0-9_-]+)\\s+(WHERE|where)\\s+([A-Za-z0-9_-]+)\\s*\\.([A-Za-z0-9_-]+)\\s*\\=\\s*([A-Za-z0-9_-]+)\\s*\\.([A-Za-z0-9_-]+)\\s*");
std::regex insert_single(
		"\\s*(INSERT|insert)\\s+(INTO|into)\\s+([A-Za-z0-9_-]+)\\s+(VALUES|values)\\s*\\(\\s*(([A-Za-z0-9_-]+|[0-9]+\\.[0-9]+)\\s*,\\s*)*([A-Za-z0-9_-]+|[0-9]+\\.[0-9]+)\\s*\\)\\s*");
std::regex insert_multiple(
		"\\s*(INSERT|insert)\\s+(INTO|into)\\s+([A-Za-z0-9_-]+)\\s+(VALUES|values)\\s+(FROM|from)\\s+([a-zA-Z0-9_-]+\\.csv)\\s*");

std::regex attrlist("([A-Za-z0-9_-]+\\s*\\,\\s*)*[A-Za-z0-9_-]+");
std::regex condition("([A-Za-z0-9_-]+)\\s*(<|<=|>|>=|=|!=)\\s*([A-Za-z0-9_-]+|([0-9]+(\\.)[0-9]+))");
std::regex filename("[A-Za-z0-9_-]+\\.csv");
std::regex filepath("(/.*\\.csv)");
std::regex temp("\\((.*)\\)");
