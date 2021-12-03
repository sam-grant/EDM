void S18_Momentum_Y_RMS_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 14:24:02 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0523,11.23671,3028.099,25.90469);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1034[22] = {
   366.6108,
   457.1028,
   570.2676,
   694.5045,
   815.6442,
   938.5045,
   1062.791,
   1188.168,
   1312.631,
   1435.783,
   1561.985,
   1685.031,
   1810.403,
   1935.07,
   2060.344,
   2184.717,
   2309.137,
   2433.457,
   2559.791,
   2678.02,
   2781.349,
   2884.595};
   Double_t Graph0_fy1034[22] = {
   12.7496,
   14.21673,
   15.11649,
   16.12963,
   16.54254,
   17.49263,
   18.25988,
   18.99986,
   19.6259,
   20.04713,
   20.36999,
   20.07313,
   19.96915,
   19.60317,
   19.23689,
   18.68587,
   17.84253,
   16.75527,
   15.71669,
   14.51135,
   13.66759,
   14.81707};
   Double_t Graph0_fex1034[22] = {
   0.3102122,
   0.1519888,
   0.1005352,
   0.06984739,
   0.05677918,
   0.05154475,
   0.04885287,
   0.04739523,
   0.04842386,
   0.04890634,
   0.05247658,
   0.05577436,
   0.06316181,
   0.06915618,
   0.07965764,
   0.08793112,
   0.1021086,
   0.1237632,
   0.1455347,
   0.1671362,
   0.3532232,
   1.155309};
   Double_t Graph0_fey1034[22] = {
   0.4441533,
   0.05018101,
   0.03033654,
   0.02254695,
   0.01854125,
   0.0176394,
   0.01756357,
   0.01773809,
   0.01854101,
   0.01929193,
   0.02096837,
   0.02204138,
   0.02470305,
   0.02672582,
   0.02997957,
   0.03235824,
   0.03589516,
   0.04070869,
   0.04494374,
   0.0507241,
   0.1330782,
   2.09545};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01034 = new TH1F("Graph_Graph01034","S18",100,114.3557,3137.695);
   Graph_Graph01034->SetMinimum(12.70351);
   Graph_Graph01034->SetMaximum(24.43789);
   Graph_Graph01034->SetDirectory(0);
   Graph_Graph01034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01034->SetLineColor(ci);
   Graph_Graph01034->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01034->GetXaxis()->SetRange(22,88);
   Graph_Graph01034->GetXaxis()->CenterTitle(true);
   Graph_Graph01034->GetXaxis()->SetLabelFont(42);
   Graph_Graph01034->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01034->GetXaxis()->SetTitleFont(42);
   Graph_Graph01034->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV] / 125 MeV");
   Graph_Graph01034->GetYaxis()->CenterTitle(true);
   Graph_Graph01034->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01034->GetYaxis()->SetLabelFont(42);
   Graph_Graph01034->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01034->GetYaxis()->SetTitleFont(42);
   Graph_Graph01034->GetZaxis()->SetLabelFont(42);
   Graph_Graph01034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01034);
   
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
