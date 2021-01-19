void pVals()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 20:29:24 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.9075001,0.1145957,7.5075,0.5327874);
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
   0.2952197,
   0.3837121,
   0.4630888,
   0.1842943,
   0.1990816,
   0.3464551,
   0.3694905};
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
   gre->SetTitle(";Data point removed;p-value");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01042 = new TH1F("Graph_Graph01042","",100,0,6.6);
   Graph_Graph01042->SetMinimum(0.1564149);
   Graph_Graph01042->SetMaximum(0.4909682);
   Graph_Graph01042->SetDirectory(0);
   Graph_Graph01042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01042->SetLineColor(ci);
   Graph_Graph01042->GetXaxis()->SetTitle("Data point removed");
   Graph_Graph01042->GetXaxis()->SetBinLabel(1,"None");
   Graph_Graph01042->GetXaxis()->SetBinLabel(16,"+50");
   Graph_Graph01042->GetXaxis()->SetBinLabel(31,"+30");
   Graph_Graph01042->GetXaxis()->SetBinLabel(46,"+10");
   Graph_Graph01042->GetXaxis()->SetBinLabel(61,"#minus10");
   Graph_Graph01042->GetXaxis()->SetBinLabel(76,"#minus30");
   Graph_Graph01042->GetXaxis()->SetBinLabel(91,"#minus50");
   Graph_Graph01042->GetXaxis()->SetRange(0,101);
   Graph_Graph01042->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph01042->GetXaxis()->CenterTitle(true);
   Graph_Graph01042->GetXaxis()->SetNdivisions(7);
   Graph_Graph01042->GetXaxis()->SetLabelFont(42);
   Graph_Graph01042->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01042->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01042->GetXaxis()->SetTitleFont(42);
   Graph_Graph01042->GetYaxis()->SetTitle("p-value");
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
