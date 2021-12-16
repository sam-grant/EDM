void S12S18_theta_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-166.9196,-6.5768,3410.609,68.85759);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1174[11] = {
   452.9199,
   656.5542,
   884.8685,
   1123.522,
   1363.588,
   1601.322,
   1825.172,
   2101.221,
   2411.982,
   2637.272,
   2790.613};
   Double_t Graph0_fy1174[11] = {
   32.94623,
   26.2622,
   21.29987,
   18.00379,
   15.34662,
   12.98537,
   10.9248,
   10.53188,
   8.234853,
   6.207971,
   4.892339};
   Double_t Graph0_fex1174[11] = {
   0.2021944,
   0.150332,
   0.1006761,
   0.09254361,
   0.1066246,
   0.151529,
   0.3161417,
   1.816055,
   0.7409915,
   0.4041897,
   0.3585213};
   Double_t Graph0_fey1174[11] = {
   0.1436469,
   0.04118802,
   0.02134177,
   0.01642006,
   0.01626105,
   0.0203,
   0.0406034,
   0.1634471,
   0.06572966,
   0.02597182,
   0.03969517};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1174,Graph0_fy1174,Graph0_fex1174,Graph0_fey1174);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01174 = new TH1F("Graph_Graph01174","S12S18_",100,218.8923,3024.797);
   Graph_Graph01174->SetMinimum(0.9666391);
   Graph_Graph01174->SetMaximum(61.31415);
   Graph_Graph01174->SetDirectory(0);
   Graph_Graph01174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01174->SetLineColor(ci);
   Graph_Graph01174->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01174->GetXaxis()->SetRange(0,101);
   Graph_Graph01174->GetXaxis()->CenterTitle(true);
   Graph_Graph01174->GetXaxis()->SetLabelFont(42);
   Graph_Graph01174->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01174->GetXaxis()->SetTitleFont(42);
   Graph_Graph01174->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01174->GetYaxis()->CenterTitle(true);
   Graph_Graph01174->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01174->GetYaxis()->SetLabelFont(42);
   Graph_Graph01174->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01174->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01174->GetYaxis()->SetTitleFont(42);
   Graph_Graph01174->GetZaxis()->SetLabelFont(42);
   Graph_Graph01174->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01174);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
