void storage_vs_timing_31()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 30 13:23:09 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-755,-0.375,-455,3.375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1032[5] = {
   -505,
   -555,
   -605,
   -655,
   -705};
   Double_t Graph0_fy1032[5] = {
   0.14,
   0.82,
   1.06,
   0.92,
   0.32};
   Double_t Graph0_fex1032[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1032[5] = {
   0.7559289,
   0.3123475,
   0.2747211,
   0.2948839,
   0.5};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("Plane 31");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","Plane 31",100,-725,-485);
   Graph_Graph01032->SetMinimum(0);
   Graph_Graph01032->SetMaximum(3);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("Timing [ns]");
   Graph_Graph01032->GetXaxis()->CenterTitle(true);
   Graph_Graph01032->GetXaxis()->SetLabelFont(42);
   Graph_Graph01032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetXaxis()->SetTitleFont(42);
   Graph_Graph01032->GetYaxis()->SetTitle("#mu^{+} storage [%]");
   Graph_Graph01032->GetYaxis()->CenterTitle(true);
   Graph_Graph01032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01032->GetYaxis()->SetLabelFont(42);
   Graph_Graph01032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetYaxis()->SetTitleFont(42);
   Graph_Graph01032->GetZaxis()->SetLabelFont(42);
   Graph_Graph01032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01032);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4190201,0.94,0.5809799,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Plane 31");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
