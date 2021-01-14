void ytot_vs_theta()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 13 17:12:20 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,-0.1536748,443.8125,0.2589899);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[24] = {
   15,
   30,
   45,
   60,
   75,
   90,
   105,
   120,
   135,
   150,
   165,
   180,
   195,
   210,
   225,
   240,
   255,
   270,
   285,
   300,
   315,
   330,
   345,
   360};
   Double_t Graph0_fy1005[24] = {
   0.01941257,
   0.0813488,
   -0.03778273,
   0.0311683,
   0.02145282,
   0.01047646,
   -0.02837363,
   -0.01396769,
   0.03501996,
   0.07485403,
   0.1369516,
   0.06402079,
   -0.03505635,
   0.1106404,
   0.06101631,
   0.1253642,
   0.00185443,
   0.1085262,
   0.06732126,
   0.07800797,
   0.08609572,
   0.1431104,
   0.01150747,
   -0.02799408};
   Double_t Graph0_fex1005[24] = {
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
   0,
   0,
   0};
   Double_t Graph0_fey1005[24] = {
   0.04730653,
   0.04677936,
   0.04711461,
   0.04718308,
   0.04674458,
   0.04709522,
   0.04811719,
   0.04740319,
   0.04750231,
   0.04789489,
   0.04572471,
   0.04696583,
   0.04597416,
   0.04670321,
   0.04668742,
   0.04744746,
   0.048244,
   0.04718496,
   0.04715204,
   0.04745198,
   0.04740608,
   0.04710204,
   0.04756289,
   0.04744892};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Low energy threshold: 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","Low energy threshold: 250 MeV",100,0,394.5);
   Graph_Graph01005->SetMinimum(-0.1124083);
   Graph_Graph01005->SetMaximum(0.2177234);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01005->SetLineColor(ci);
   Graph_Graph01005->GetXaxis()->SetTitle("#theta [deg]");
   Graph_Graph01005->GetXaxis()->CenterTitle(true);
   Graph_Graph01005->GetXaxis()->SetLabelFont(42);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetXaxis()->SetTitleFont(42);
   Graph_Graph01005->GetYaxis()->SetTitle("y [mm]");
   Graph_Graph01005->GetYaxis()->CenterTitle(true);
   Graph_Graph01005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01005->GetYaxis()->SetLabelFont(42);
   Graph_Graph01005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetYaxis()->SetTitleFont(42);
   Graph_Graph01005->GetZaxis()->SetLabelFont(42);
   Graph_Graph01005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01005);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.2167588,0.9341608,0.7832412,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Low energy threshold: 250 MeV");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
