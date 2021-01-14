void ytot_vs_theta()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 13 17:06:12 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-49.3125,-0.3051793,443.8125,0.3720274);
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
   0.06787098,
   0.02482018,
   0.05037435,
   0.02702183,
   0.03775822,
   -0.04477944,
   -0.1237941,
   -0.01941589,
   0.001744222,
   -0.02554679,
   0.04454603,
   -0.02861599,
   -0.02572908,
   0.1525531,
   0.03056071,
   0.1284611,
   0.03873596,
   0.08747719,
   0.0371109,
   0.0616207,
   0.06627479,
   0.1968522,
   0.06611826,
   -0.02006916};
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
   0.06260171,
   0.06395486,
   0.06333734,
   0.06352691,
   0.05795211,
   0.06462157,
   0.06851741,
   0.06851909,
   0.06667386,
   0.06892342,
   0.06259924,
   0.06408529,
   0.05739037,
   0.06298685,
   0.06049923,
   0.06578038,
   0.06682659,
   0.06375437,
   0.06049126,
   0.0679304,
   0.06323203,
   0.06230743,
   0.06073015,
   0.07016584};
   TGraphErrors *gre = new TGraphErrors(24,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Low energy threshold: 1500 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","Low energy threshold: 1500 MeV",100,0,394.5);
   Graph_Graph01005->SetMinimum(-0.2374586);
   Graph_Graph01005->SetMaximum(0.3043067);
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
   
   TPaveText *pt = new TPaveText(0.2067085,0.9341608,0.7932915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Low energy threshold: 1500 MeV");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
