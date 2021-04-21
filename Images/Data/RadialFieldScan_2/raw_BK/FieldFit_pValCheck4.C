void FieldFit_pValCheck4()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 19 01:22:32 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-61.36538,75,60.9951);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[5] = {
   50,
   30,
   10,
   -10,
   -50};
   Double_t Graph0_fy1039[5] = {
   39.1181,
   20.96023,
   9.013131,
   -6.128556,
   -38.35743};
   Double_t Graph0_fex1039[5] = {
   6.953119e-310,
   0,
   0,
   6.953119e-310,
   2.233916e-314};
   Double_t Graph0_fey1039[5] = {
   1.483591,
   1.222034,
   1.413793,
   1.245862,
   2.614538};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","",100,-60,60);
   Graph_Graph01039->SetMinimum(-49.12933);
   Graph_Graph01039->SetMaximum(48.75906);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
   
   TF1 *mainFit1040 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1040->SetFillColor(19);
   mainFit1040->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1040->SetLineColor(ci);
   mainFit1040->SetLineWidth(2);
   mainFit1040->SetChisquare(4.603073);
   mainFit1040->SetNDF(3);
   mainFit1040->GetXaxis()->SetLabelFont(42);
   mainFit1040->GetXaxis()->SetTitleOffset(1);
   mainFit1040->GetXaxis()->SetTitleFont(42);
   mainFit1040->GetYaxis()->SetLabelFont(42);
   mainFit1040->GetYaxis()->SetTitleFont(42);
   mainFit1040->SetParameter(0,0.5564918);
   mainFit1040->SetParError(0,0.7269708);
   mainFit1040->SetParLimits(0,0,0);
   mainFit1040->SetParameter(1,0.7463412);
   mainFit1040->SetParError(1,0.02398345);
   mainFit1040->SetParLimits(1,0,0);
   mainFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1040);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.53");
   pt_LaTex = pt->AddText("0.746#pm0.024");
   pt_LaTex = pt->AddText("0.556#pm0.727");
   pt_LaTex = pt->AddText("0.746#pm0.985");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-0.7456265,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.7456265,-49.12933,-0.7456265,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1041 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1041->SetFillColor(19);
   mainFit1041->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1041->SetLineColor(ci);
   mainFit1041->SetLineWidth(2);
   mainFit1041->SetChisquare(4.603073);
   mainFit1041->SetNDF(3);
   mainFit1041->GetXaxis()->SetLabelFont(42);
   mainFit1041->GetXaxis()->SetTitleOffset(1);
   mainFit1041->GetXaxis()->SetTitleFont(42);
   mainFit1041->GetYaxis()->SetLabelFont(42);
   mainFit1041->GetYaxis()->SetTitleFont(42);
   mainFit1041->SetParameter(0,0.5564918);
   mainFit1041->SetParError(0,0.7269708);
   mainFit1041->SetParLimits(0,0,0);
   mainFit1041->SetParameter(1,0.7463412);
   mainFit1041->SetParError(1,0.02398345);
   mainFit1041->SetParLimits(1,0,0);
   mainFit1041->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
