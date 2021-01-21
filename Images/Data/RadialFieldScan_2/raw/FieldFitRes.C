void FieldFitRes()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 19 01:22:32 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-2.798699,75,2.1068);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1028[6] = {
   50,
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1028[6] = {
   0.9971936,
   -1.981115,
   1.251345,
   1.289217,
   -0.7816315,
   -0.5805324};
   Double_t Graph0_fex1028[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1028[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];Fit residual [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01028 = new TH1F("Graph_Graph01028","",100,-60,60);
   Graph_Graph01028->SetMinimum(-2.308149);
   Graph_Graph01028->SetMaximum(1.61625);
   Graph_Graph01028->SetDirectory(0);
   Graph_Graph01028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01028->SetLineColor(ci);
   Graph_Graph01028->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01028->GetXaxis()->CenterTitle(true);
   Graph_Graph01028->GetXaxis()->SetLabelFont(42);
   Graph_Graph01028->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetXaxis()->SetTitleFont(42);
   Graph_Graph01028->GetYaxis()->SetTitle("Fit residual [ppm]");
   Graph_Graph01028->GetYaxis()->CenterTitle(true);
   Graph_Graph01028->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01028->GetYaxis()->SetLabelFont(42);
   Graph_Graph01028->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01028->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01028->GetYaxis()->SetTitleFont(42);
   Graph_Graph01028->GetZaxis()->SetLabelFont(42);
   Graph_Graph01028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01028);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
