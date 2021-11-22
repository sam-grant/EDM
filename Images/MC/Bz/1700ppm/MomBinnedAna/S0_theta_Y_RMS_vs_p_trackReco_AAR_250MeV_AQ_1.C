void S0_theta_Y_RMS_vs_p_trackReco_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 14:14:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-336.5052,-2.822658,3337.977,68.70557);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1041[12] = {
   177.9576,
   433.3462,
   628.2616,
   873.0121,
   1121.62,
   1371.471,
   1620.486,
   1868.641,
   2117.771,
   2364.099,
   2613.028,
   2828.705};
   Double_t Graph0_fy1041[12] = {
   55.279,
   33.93086,
   28.00668,
   23.01281,
   19.43449,
   16.5212,
   14.14948,
   12.114,
   10.2838,
   8.505858,
   6.680516,
   4.834235};
   Double_t Graph0_fex1041[12] = {
   1.2686,
   0.1197282,
   0.1082326,
   0.1088648,
   0.1169708,
   0.126421,
   0.13867,
   0.1576269,
   0.1843168,
   0.2260863,
   0.2983604,
   0.3582004};
   Double_t Graph0_fey1041[12] = {
   1.115439,
   0.06043225,
   0.0300267,
   0.02461884,
   0.02229894,
   0.02051062,
   0.01930109,
   0.01877798,
   0.01866084,
   0.01902919,
   0.01964297,
   0.02293968};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1041,Graph0_fy1041,Graph0_fex1041,Graph0_fey1041);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01041 = new TH1F("Graph_Graph01041","S0_",100,0,3094.301);
   Graph_Graph01041->SetMinimum(4.330166);
   Graph_Graph01041->SetMaximum(61.55275);
   Graph_Graph01041->SetDirectory(0);
   Graph_Graph01041->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01041->SetLineColor(ci);
   Graph_Graph01041->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01041->GetXaxis()->SetRange(2,96);
   Graph_Graph01041->GetXaxis()->CenterTitle(true);
   Graph_Graph01041->GetXaxis()->SetLabelFont(42);
   Graph_Graph01041->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01041->GetXaxis()->SetTitleFont(42);
   Graph_Graph01041->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01041->GetYaxis()->CenterTitle(true);
   Graph_Graph01041->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01041->GetYaxis()->SetLabelFont(42);
   Graph_Graph01041->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01041->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01041->GetYaxis()->SetTitleFont(42);
   Graph_Graph01041->GetZaxis()->SetLabelFont(42);
   Graph_Graph01041->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01041);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
