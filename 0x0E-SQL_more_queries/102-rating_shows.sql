-- https://s3.amazonaws.com/intranet-projects-files/holbertonschool-higher-level_programming+/274/hbtn_0d_tvshows.sql
-- run this first to import a SQL dump -->
--      echo "CREATE DATABASE hbtn_0d_tvshows;" | mysql -uroot -p
--      curl [link] -s | mysql -uroot -p hbtn_0d_tvshows
--
-- script that lists all shows, and all genres linked to that show, from the database hbtn_0d_tvshows
-- if a show t have a genre, display NULL in the genre column
-- each record should display: tv_shows.title - tv_genres.name
-- results must be sorted in ascending order by the show title and genre name
-- can use only one SELECT statement
-- the database name will be passed as an argument of the mysql command

SELECT tv_shows.title, SUM(tv_show_ratings.rate) AS "rating" FROM tv_shows
LEFT JOIN tv_show_ratings ON tv_show_ratings.show_id = tv_shows.id
GROUP BY tv_shows.title
ORDER BY SUM(tv_show_ratings.rate) DESC
;
