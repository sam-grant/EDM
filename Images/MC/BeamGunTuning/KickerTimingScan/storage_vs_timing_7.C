void storage_vs_timing_7()
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
   
   Double_t Graph0_fx1008[5] = {
   -505,
   -555,
   -605,
   -655,
   -705};
   Double_t Graph0_fy1008[5] = {
   0.38,
   1.4,
   2.04,
   1.54,
   0.58};
   Double_t Graph0_fex1008[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1008[5] = {
   0.4588315,
   0.2390457,
   0.1980295,
   0.2279212,
   0.3713907};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle("Plane 7");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01008 = new TH1F("Graph_Graph01008","Plane 7",100,-725,-485);
   Graph_Graph01008->SetMinimum(0);
   Graph_Graph01008->SetMaximum(3);
   Graph_Graph01008->SetDirectory(0);
   Graph_Graph01008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01008->SetLineColor(ci);
   Graph_Graph01008->GetXaxis()->SetTitle("Timing [ns]");
   Graph_Graph01008->GetXaxis()->CenterTitle(true);
   Graph_Graph01008->GetXaxis()->SetLabelFont(42);
   Graph_Graph01008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01008->GetXaxis()->SetTitleFont(42);
   Graph_Graph01008->GetYaxis()->SetTitle("#mu^{+} storage [%]");
   Graph_Graph01008->GetYaxis()->CenterTitle(true);
   Graph_Graph01008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01008->GetYaxis()->SetLabelFont(42);
   Graph_Graph01008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01008->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01008->GetYaxis()->SetTitleFont(42);
   Graph_Graph01008->GetZaxis()->SetLabelFont(42);
   Graph_Graph01008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01008);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4265578,0.94,0.5734422,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Plane 7");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
