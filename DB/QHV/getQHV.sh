for run in `cat txt/runNumbers/$1`; do

    psql -d gm2_online_prod -h g2db-priv -U gm2_writer -p 5433 << EOF >> txt/tables/${run}.txt
select * from gm2quad_runs WHERE run = '${run}';
\q
EOF

done
