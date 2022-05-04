void S12S18_c_vs_p_A_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 25 18:52:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-165.2628,-0.0001450643,3382.111,0.000121146);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1171[11] = {
   451.8594,
   653.0946,
   880.2614,
   1122.965,
   1370.83,
   1620.068,
   1866.8,
   2114.423,
   2362.795,
   2614.218,
   2792.888};
   Double_t Graph0_fy1171[11] = {
   7.474663e-05,
   -5.224012e-07,
   -7.304974e-07,
   -6.686664e-07,
   -7.295968e-07,
   -9.603263e-07,
   -1.121938e-06,
   -1.39359e-06,
   -4.203377e-06,
   -5.93047e-06,
   -6.471053e-05};
   Double_t Graph0_fex1171[11] = {
   0.1367683,
   0.116056,
   0.08422569,
   0.08251709,
   0.08858456,
   0.09815103,
   0.1147037,
   0.1440146,
   0.1902515,
   0.2325177,
   0.33584};
   Double_t Graph0_fey1171[11] = {
   2.030952e-06,
   1.403085e-07,
   4.777694e-08,
   4.369064e-08,
   5.408958e-08,
   7.540961e-08,
   1.254138e-07,
   2.688087e-07,
   6.850949e-07,
   1.563263e-06,
   3.598542e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1171,Graph0_fy1171,Graph0_fex1171,Graph0_fey1171);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01171 = new TH1F("Graph_Graph01171","S12S18_",100,217.5726,3027.374);
   Graph_Graph01171->SetMinimum(-0.0001184433);
   Graph_Graph01171->SetMaximum(9.452493e-05);
   Graph_Graph01171->SetDirectory(0);
   Graph_Graph01171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01171->SetLineColor(ci);
   Graph_Graph01171->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01171->GetXaxis()->SetRange(0,100);
   Graph_Graph01171->GetXaxis()->CenterTitle(true);
   Graph_Graph01171->GetXaxis()->SetLabelFont(42);
   Graph_Graph01171->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01171->GetXaxis()->SetTitleFont(42);
   Graph_Graph01171->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01171->GetYaxis()->CenterTitle(true);
   Graph_Graph01171->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01171->GetYaxis()->SetLabelFont(42);
   Graph_Graph01171->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01171->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01171->GetYaxis()->SetTitleFont(42);
   Graph_Graph01171->GetZaxis()->SetLabelFont(42);
   Graph_Graph01171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01171);
   
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
