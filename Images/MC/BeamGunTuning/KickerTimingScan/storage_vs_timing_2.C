void storage_vs_timing_2()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 30 13:23:07 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-755,-0.375,-455,3.375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[5] = {
   -505,
   -555,
   -605,
   -655,
   -705};
   Double_t Graph0_fy1003[5] = {
   0.48,
   1.72,
   2.34,
   1.86,
   0.68};
   Double_t Graph0_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1003[5] = {
   0.4082483,
   0.2156655,
   0.1849001,
   0.2073903,
   0.3429972};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Plane 2");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01003 = new TH1F("Graph_Graph01003","Plane 2",100,-725,-485);
   Graph_Graph01003->SetMinimum(0);
   Graph_Graph01003->SetMaximum(3);
   Graph_Graph01003->SetDirectory(0);
   Graph_Graph01003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01003->SetLineColor(ci);
   Graph_Graph01003->GetXaxis()->SetTitle("Timing [ns]");
   Graph_Graph01003->GetXaxis()->CenterTitle(true);
   Graph_Graph01003->GetXaxis()->SetLabelFont(42);
   Graph_Graph01003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01003->GetXaxis()->SetTitleFont(42);
   Graph_Graph01003->GetYaxis()->SetTitle("#mu^{+} storage [%]");
   Graph_Graph01003->GetYaxis()->CenterTitle(true);
   Graph_Graph01003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01003->GetYaxis()->SetLabelFont(42);
   Graph_Graph01003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01003->GetYaxis()->SetTitleFont(42);
   Graph_Graph01003->GetZaxis()->SetLabelFont(42);
   Graph_Graph01003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01003);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4265578,0.94,0.5734422,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Plane 2");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
