void pVals()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan  4 18:20:55 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.8250001,-0.002005693,7.425,0.912593);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1042[7] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t Graph0_fy1042[7] = {
   0.2511357,
   0.2132712,
   0.7601599,
   0.2185798,
   0.2703824,
   0.2032787,
   0.1504274};
   Double_t Graph0_fex1042[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1042[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1042,Graph0_fy1042,Graph0_fex1042,Graph0_fey1042);
   gre->SetName("Graph0");
   gre->SetTitle("test");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01042 = new TH1F("Graph_Graph01042","test",100,0,6.6);
   Graph_Graph01042->SetMinimum(0.08945419);
   Graph_Graph01042->SetMaximum(0.8211332);
   Graph_Graph01042->SetDirectory(0);
   Graph_Graph01042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01042->SetLineColor(ci);
   Graph_Graph01042->GetXaxis()->CenterTitle(true);
   Graph_Graph01042->GetXaxis()->SetLabelFont(42);
   Graph_Graph01042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01042->GetXaxis()->SetTitleFont(42);
   Graph_Graph01042->GetYaxis()->CenterTitle(true);
   Graph_Graph01042->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01042->GetYaxis()->SetLabelFont(42);
   Graph_Graph01042->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01042->GetYaxis()->SetTitleFont(42);
   Graph_Graph01042->GetZaxis()->SetLabelFont(42);
   Graph_Graph01042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01042->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01042);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("test");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
