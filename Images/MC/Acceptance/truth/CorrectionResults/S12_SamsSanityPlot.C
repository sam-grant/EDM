void S12_SamsSanityPlot()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(499.748,0.08496456,2740.76,0.406681);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1004[7] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258};
   Double_t _fy1004[7] = {
   0.3501363,
   0.3530616,
   0.3043671,
   0.2584475,
   0.3197443,
   0.138584,
   0.2158812};
   Double_t _fex1004[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1004[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(7,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle("Hell");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Hell",100,723.8492,2516.659);
   Graph_Graph1004->SetMinimum(0.1171362);
   Graph_Graph1004->SetMaximum(0.3745094);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->CenterTitle(true);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->CenterTitle(true);
   Graph_Graph1004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("apl");
   
   TPaveText *pt = new TPaveText(0.4573367,0.94,0.5426633,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Hell");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
