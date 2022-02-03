void S12_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.4_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:36:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3926,0.000288014,3406.902,0.003997776);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1107[11] = {
   451.8035,
   653.3616,
   880.3325,
   1123.156,
   1371.14,
   1620.289,
   1866.778,
   2114.882,
   2362.575,
   2614.184,
   2787.586};
   Double_t Graph0_fy1107[11] = {
   0.00106394,
   0.0008214548,
   0.0008995067,
   0.001268799,
   0.001157378,
   0.001650122,
   0.002232617,
   0.002291761,
   0.0009661281,
   0.00180095,
   0.002150543};
   Double_t Graph0_fex1107[11] = {
   0.1188671,
   0.1003469,
   0.07271107,
   0.071023,
   0.07561683,
   0.08358001,
   0.09743321,
   0.1220673,
   0.1594245,
   0.1959089,
   0.2394042};
   Double_t Graph0_fey1107[11] = {
   0.0009107557,
   0.0003415302,
   0.0002272055,
   0.0002358929,
   0.0002360453,
   0.0002552207,
   0.0003184547,
   0.0003705621,
   0.0005333057,
   0.0005978053,
   0.00215665};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1107,Graph0_fy1107,Graph0_fex1107,Graph0_fey1107);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01107 = new TH1F("Graph_Graph01107","S12_",100,218.0706,3021.439);
   Graph_Graph01107->SetMinimum(0.0006589902);
   Graph_Graph01107->SetMaximum(0.003626799);
   Graph_Graph01107->SetDirectory(0);
   Graph_Graph01107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01107->SetLineColor(ci);
   Graph_Graph01107->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01107->GetXaxis()->SetRange(0,101);
   Graph_Graph01107->GetXaxis()->CenterTitle(true);
   Graph_Graph01107->GetXaxis()->SetLabelFont(42);
   Graph_Graph01107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01107->GetXaxis()->SetTitleFont(42);
   Graph_Graph01107->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01107->GetYaxis()->CenterTitle(true);
   Graph_Graph01107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01107->GetYaxis()->SetLabelFont(42);
   Graph_Graph01107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01107->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01107->GetYaxis()->SetTitleFont(42);
   Graph_Graph01107->GetZaxis()->SetLabelFont(42);
   Graph_Graph01107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01107);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
