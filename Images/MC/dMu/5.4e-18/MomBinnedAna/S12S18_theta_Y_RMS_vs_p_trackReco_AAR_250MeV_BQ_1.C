void S12S18_theta_Y_RMS_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov  3 15:54:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-1.632417,2750,37.71088);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1048[11] = {
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1048[11] = {
   31.08736,
   25.76494,
   21.17482,
   17.93772,
   15.40214,
   13.24798,
   11.38507,
   9.610297,
   7.934231,
   6.25967,
   4.949258};
   Double_t Graph0_fex1048[11] = {
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
   Double_t Graph0_fey1048[11] = {
   0.0663038,
   0.02226623,
   0.01273987,
   0.01046448,
   0.009612339,
   0.009172757,
   0.009254098,
   0.009788504,
   0.01057446,
   0.01046317,
   0.02445876};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1048,Graph0_fy1048,Graph0_fex1048,Graph0_fey1048);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01048 = new TH1F("Graph_Graph01048","S12S18_",100,125,3125);
   Graph_Graph01048->SetMinimum(2.301913);
   Graph_Graph01048->SetMaximum(33.77655);
   Graph_Graph01048->SetDirectory(0);
   Graph_Graph01048->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01048->SetLineColor(ci);
   Graph_Graph01048->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01048->GetXaxis()->SetRange(21,80);
   Graph_Graph01048->GetXaxis()->CenterTitle(true);
   Graph_Graph01048->GetXaxis()->SetLabelFont(42);
   Graph_Graph01048->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01048->GetXaxis()->SetTitleFont(42);
   Graph_Graph01048->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad]");
   Graph_Graph01048->GetYaxis()->CenterTitle(true);
   Graph_Graph01048->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01048->GetYaxis()->SetLabelFont(42);
   Graph_Graph01048->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01048->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01048->GetYaxis()->SetTitleFont(42);
   Graph_Graph01048->GetZaxis()->SetLabelFont(42);
   Graph_Graph01048->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01048->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01048);
   
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
