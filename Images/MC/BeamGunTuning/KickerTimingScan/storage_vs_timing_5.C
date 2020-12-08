void storage_vs_timing_5()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 30 13:23:08 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-755,-0.375,-455,3.375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1006[5] = {
   -505,
   -555,
   -605,
   -655,
   -705};
   Double_t Graph0_fy1006[5] = {
   0.48,
   1.5,
   2.1,
   1.64,
   0.62};
   Double_t Graph0_fex1006[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1006[5] = {
   0.4082483,
   0.2309401,
   0.19518,
   0.2208631,
   0.3592106};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("Plane 5");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01006 = new TH1F("Graph_Graph01006","Plane 5",100,-725,-485);
   Graph_Graph01006->SetMinimum(0);
   Graph_Graph01006->SetMaximum(3);
   Graph_Graph01006->SetDirectory(0);
   Graph_Graph01006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01006->SetLineColor(ci);
   Graph_Graph01006->GetXaxis()->SetTitle("Timing [ns]");
   Graph_Graph01006->GetXaxis()->CenterTitle(true);
   Graph_Graph01006->GetXaxis()->SetLabelFont(42);
   Graph_Graph01006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01006->GetXaxis()->SetTitleFont(42);
   Graph_Graph01006->GetYaxis()->SetTitle("#mu^{+} storage [%]");
   Graph_Graph01006->GetYaxis()->CenterTitle(true);
   Graph_Graph01006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01006->GetYaxis()->SetLabelFont(42);
   Graph_Graph01006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01006->GetYaxis()->SetTitleFont(42);
   Graph_Graph01006->GetZaxis()->SetLabelFont(42);
   Graph_Graph01006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01006);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4265578,0.94,0.5734422,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Plane 5");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
