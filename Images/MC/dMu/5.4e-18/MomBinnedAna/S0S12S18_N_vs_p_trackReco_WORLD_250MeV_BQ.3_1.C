void S0S12S18_N_vs_p_trackReco_WORLD_250MeV_BQ.3_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:35:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.5781,-2262855,3407.915,3182586);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1214[11] = {
   451.7878,
   653.2973,
   880.261,
   1123.043,
   1371.131,
   1620.23,
   1867.05,
   2115.574,
   2362.998,
   2614.023,
   2788.472};
   Double_t Graph0_fy1214[11] = {
   165450,
   1010267,
   2073581,
   2199952,
   1929230,
   1572883,
   1157927,
   754958,
   453609,
   285684,
   35346};
   Double_t Graph0_fex1214[11] = {
   0.08119292,
   0.06850517,
   0.04968577,
   0.04853003,
   0.05180005,
   0.05728402,
   0.06665481,
   0.0826074,
   0.106243,
   0.1304439,
   0.1582888};
   Double_t Graph0_fey1214[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1214,Graph0_fy1214,Graph0_fex1214,Graph0_fey1214);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01214 = new TH1F("Graph_Graph01214","S0S12S18_",100,218.0143,3022.323);
   Graph_Graph01214->SetMinimum(-1718311);
   Graph_Graph01214->SetMaximum(2638041);
   Graph_Graph01214->SetDirectory(0);
   Graph_Graph01214->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01214->SetLineColor(ci);
   Graph_Graph01214->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01214->GetXaxis()->SetRange(0,101);
   Graph_Graph01214->GetXaxis()->CenterTitle(true);
   Graph_Graph01214->GetXaxis()->SetLabelFont(42);
   Graph_Graph01214->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01214->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01214->GetXaxis()->SetTitleFont(42);
   Graph_Graph01214->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01214->GetYaxis()->CenterTitle(true);
   Graph_Graph01214->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01214->GetYaxis()->SetLabelFont(42);
   Graph_Graph01214->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01214->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01214->GetYaxis()->SetTitleFont(42);
   Graph_Graph01214->GetZaxis()->SetLabelFont(42);
   Graph_Graph01214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01214);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
