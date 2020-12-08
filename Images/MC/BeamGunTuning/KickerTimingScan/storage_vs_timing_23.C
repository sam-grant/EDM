void storage_vs_timing_23()
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
   
   Double_t Graph0_fx1024[5] = {
   -505,
   -555,
   -605,
   -655,
   -705};
   Double_t Graph0_fy1024[5] = {
   0.16,
   0.88,
   1.14,
   0.94,
   0.32};
   Double_t Graph0_fex1024[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1024[5] = {
   0.7071068,
   0.3015113,
   0.2649065,
   0.29173,
   0.5};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("Plane 23");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01024 = new TH1F("Graph_Graph01024","Plane 23",100,-725,-485);
   Graph_Graph01024->SetMinimum(0);
   Graph_Graph01024->SetMaximum(3);
   Graph_Graph01024->SetDirectory(0);
   Graph_Graph01024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01024->SetLineColor(ci);
   Graph_Graph01024->GetXaxis()->SetTitle("Timing [ns]");
   Graph_Graph01024->GetXaxis()->CenterTitle(true);
   Graph_Graph01024->GetXaxis()->SetLabelFont(42);
   Graph_Graph01024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01024->GetXaxis()->SetTitleFont(42);
   Graph_Graph01024->GetYaxis()->SetTitle("#mu^{+} storage [%]");
   Graph_Graph01024->GetYaxis()->CenterTitle(true);
   Graph_Graph01024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01024->GetYaxis()->SetLabelFont(42);
   Graph_Graph01024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01024->GetYaxis()->SetTitleFont(42);
   Graph_Graph01024->GetZaxis()->SetLabelFont(42);
   Graph_Graph01024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01024);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4165075,0.94,0.5834925,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Plane 23");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
