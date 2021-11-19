void S18_c_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:59:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(530.6605,-4.570626,2721.946,3.005755);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1023[22] = {
   367.1695,
   457.1672,
   569.9915,
   694.434,
   815.6521,
   938.5283,
   1062.845,
   1188.203,
   1312.631,
   1435.697,
   1561.957,
   1685.048,
   1810.518,
   1934.935,
   2060.25,
   2184.735,
   2308.965,
   2433.42,
   2559.743,
   2677.947,
   2781.437,
   2884.329};
   Double_t Graph0_fy1023[22] = {
   -1.663649,
   -0.3015514,
   -0.2863536,
   -0.2534413,
   -0.2631567,
   -0.2930846,
   -0.2439059,
   -0.1173513,
   -0.07334476,
   -0.05041592,
   -0.02286882,
   -0.09653723,
   -0.08409221,
   -0.0622713,
   -0.0637042,
   -0.06940432,
   -0.0393132,
   -0.0851064,
   -0.08598838,
   -0.03848165,
   -0.1131103,
   0.7421834};
   Double_t Graph0_fex1023[22] = {
   0.2256843,
   0.1159461,
   0.07683435,
   0.05391212,
   0.04369731,
   0.03961808,
   0.03755871,
   0.03651898,
   0.03739335,
   0.03772291,
   0.04075554,
   0.04317573,
   0.04913531,
   0.05397125,
   0.06228492,
   0.06899389,
   0.08028826,
   0.09726218,
   0.1147976,
   0.1336637,
   0.2822085,
   1.333561};
   Double_t Graph0_fey1023[22] = {
   1.644246,
   0.1718307,
   0.08267424,
   0.05098995,
   0.03571433,
   0.02953838,
   0.02602935,
   0.02348547,
   0.02226524,
   0.02126947,
   0.02134974,
   0.02081564,
   0.02172733,
   0.02207126,
   0.02312922,
   0.02361525,
   0.02483265,
   0.02696214,
   0.02813166,
   0.03101828,
   0.0799419,
   1.000841};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01023 = new TH1F("Graph_Graph01023","S18",100,115.072,3137.534);
   Graph_Graph01023->SetMinimum(-3.812988);
   Graph_Graph01023->SetMaximum(2.248116);
   Graph_Graph01023->SetDirectory(0);
   Graph_Graph01023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01023->SetLineColor(ci);
   Graph_Graph01023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01023->GetXaxis()->SetRange(22,79);
   Graph_Graph01023->GetXaxis()->CenterTitle(true);
   Graph_Graph01023->GetXaxis()->SetLabelFont(42);
   Graph_Graph01023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01023->GetXaxis()->SetTitleFont(42);
   Graph_Graph01023->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
   Graph_Graph01023->GetYaxis()->CenterTitle(true);
   Graph_Graph01023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01023->GetYaxis()->SetLabelFont(42);
   Graph_Graph01023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01023->GetYaxis()->SetTitleFont(42);
   Graph_Graph01023->GetZaxis()->SetLabelFont(42);
   Graph_Graph01023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01023);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
