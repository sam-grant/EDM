void S12S18_full_A_vs_p_trackReco_equalStats_250e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 01:13:21 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(2321,-0.1244825,2879,0.1842163);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1194[3] = {
   2400,
   2600,
   2800};
   Double_t Graph0_fy1194[3] = {
   0.1107158,
   0.07681269,
   -0.03022526};
   Double_t Graph0_fex1194[3] = {
   100,
   100,
   100};
   Double_t Graph0_fey1194[3] = {
   0.02205077,
   0.02700584,
   0.04280744};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1194,Graph0_fy1194,Graph0_fex1194,Graph0_fey1194);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01194 = new TH1F("Graph_Graph01194","S12S18",100,2240,2960);
   Graph_Graph01194->SetMinimum(-0.09361263);
   Graph_Graph01194->SetMaximum(0.1533464);
   Graph_Graph01194->SetDirectory(0);
   Graph_Graph01194->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01194->SetLineColor(ci);
   Graph_Graph01194->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01194->GetXaxis()->SetRange(20,81);
   Graph_Graph01194->GetXaxis()->CenterTitle(true);
   Graph_Graph01194->GetXaxis()->SetLabelFont(42);
   Graph_Graph01194->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01194->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01194->GetXaxis()->SetTitleFont(42);
   Graph_Graph01194->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01194->GetYaxis()->CenterTitle(true);
   Graph_Graph01194->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01194->GetYaxis()->SetLabelFont(42);
   Graph_Graph01194->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01194->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01194->GetYaxis()->SetTitleFont(42);
   Graph_Graph01194->GetZaxis()->SetLabelFont(42);
   Graph_Graph01194->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01194->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01194);
   
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
