void ytot_vs_theta()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 13 17:11:12 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,-0.1764853,443.8125,0.2852533);
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
   0.03295608,
   0.0681908,
   -0.00312441,
   0.03213988,
   0.04655252,
   -0.02585274,
   -0.04845547,
   -0.01674426,
   0.02358637,
   0.01507376,
   0.115735,
   0.04956754,
   -0.0454018,
   0.0826675,
   0.07462577,
   0.09889252,
   -0.0007785364,
   0.09951692,
   0.06191407,
   0.09738281,
   0.06488993,
   0.1589135,
   0.03064651,
   -0.03534027};
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
   0.04922875,
   0.04907757,
   0.04949818,
   0.04949049,
   0.04883096,
   0.04983823,
   0.0510734,
   0.05016682,
   0.04996903,
   0.05041936,
   0.04812927,
   0.0490578,
   0.04741818,
   0.04884075,
   0.04862546,
   0.04987647,
   0.05050977,
   0.04918926,
   0.04864871,
   0.0498437,
   0.04972279,
   0.04938334,
   0.04962563,
   0.04979104};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Low energy threshold: 500 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","Low energy threshold: 500 MeV",100,0,394.5);
   Graph_Graph01005->SetMinimum(-0.1303114);
   Graph_Graph01005->SetMaximum(0.2390794);
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
   TText *pt_LaTex = pt->AddText("Low energy threshold: 500 MeV");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
