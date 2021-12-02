void S12_eAEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 18:01:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8816,-0.255089,2727.048,2.481333);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1020[22] = {
   367.2763,
   456.6701,
   570.2384,
   695.014,
   815.941,
   938.5472,
   1062.657,
   1188.254,
   1312.768,
   1435.889,
   1561.964,
   1685.27,
   1810.577,
   1935.117,
   2060.28,
   2184.973,
   2309.128,
   2432.978,
   2559.529,
   2679.227,
   2781.166,
   2885.901};
   Double_t Graph0_fy1020[22] = {
   2.008866,
   0.1837588,
   0.08951959,
   0.05354861,
   0.03686276,
   0.03027729,
   0.02669665,
   0.02410142,
   0.0226035,
   0.02131648,
   0.02136003,
   0.02061472,
   0.02135115,
   0.02139654,
   0.02239871,
   0.02259665,
   0.02367667,
   0.02549207,
   0.02714312,
   0.02920169,
   0.07021655,
   0.9778002};
   Double_t Graph0_fex1020[22] = {
   0.1727402,
   0.08564447,
   0.05750668,
   0.03900971,
   0.03131764,
   0.02823439,
   0.02680342,
   0.02592069,
   0.02627859,
   0.0263654,
   0.02833862,
   0.02976529,
   0.03340781,
   0.03661848,
   0.04175349,
   0.04603796,
   0.05317634,
   0.06379139,
   0.07674565,
   0.08753628,
   0.1746818,
   1.164882};
   Double_t Graph0_fey1020[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01020 = new TH1F("Graph_Graph01020","S12",100,115.1073,3139.062);
   Graph_Graph01020->SetMinimum(0.01855325);
   Graph_Graph01020->SetMaximum(2.207691);
   Graph_Graph01020->SetDirectory(0);
   Graph_Graph01020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01020->SetLineColor(ci);
   Graph_Graph01020->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01020->GetXaxis()->SetRange(21,79);
   Graph_Graph01020->GetXaxis()->CenterTitle(true);
   Graph_Graph01020->GetXaxis()->SetLabelFont(42);
   Graph_Graph01020->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01020->GetXaxis()->SetTitleFont(42);
   Graph_Graph01020->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01020->GetYaxis()->CenterTitle(true);
   Graph_Graph01020->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01020->GetYaxis()->SetLabelFont(42);
   Graph_Graph01020->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01020->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01020->GetYaxis()->SetTitleFont(42);
   Graph_Graph01020->GetZaxis()->SetLabelFont(42);
   Graph_Graph01020->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01020);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
