void S12S18_full_c_vs_p_trackReco_equalStats_250e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 01:13:21 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(2321,-0.1654384,2879,0.04325542);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1193[3] = {
   2400,
   2600,
   2800};
   Double_t Graph0_fy1193[3] = {
   -0.1072372,
   -0.108793,
   -0.02768118};
   Double_t Graph0_fex1193[3] = {
   100,
   100,
   100};
   Double_t Graph0_fey1193[3] = {
   0.0172517,
   0.02186305,
   0.0361543};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1193,Graph0_fy1193,Graph0_fex1193,Graph0_fey1193);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01193 = new TH1F("Graph_Graph01193","S12S18",100,2240,2960);
   Graph_Graph01193->SetMinimum(-0.144569);
   Graph_Graph01193->SetMaximum(0.02238604);
   Graph_Graph01193->SetDirectory(0);
   Graph_Graph01193->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01193->SetLineColor(ci);
   Graph_Graph01193->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01193->GetXaxis()->SetRange(20,81);
   Graph_Graph01193->GetXaxis()->CenterTitle(true);
   Graph_Graph01193->GetXaxis()->SetLabelFont(42);
   Graph_Graph01193->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01193->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01193->GetXaxis()->SetTitleFont(42);
   Graph_Graph01193->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01193->GetYaxis()->CenterTitle(true);
   Graph_Graph01193->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01193->GetYaxis()->SetLabelFont(42);
   Graph_Graph01193->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01193->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01193->GetYaxis()->SetTitleFont(42);
   Graph_Graph01193->GetZaxis()->SetLabelFont(42);
   Graph_Graph01193->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01193->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01193);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
