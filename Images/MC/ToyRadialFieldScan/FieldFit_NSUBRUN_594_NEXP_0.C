void FieldFit_NSUBRUN_594_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-178.2315,45,197.5129);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1069[2] = {
   30,
   -30};
   Double_t Graph0_fy1069[2] = {
   45.79338,
   -26.51196};
   Double_t Graph0_fex1069[2] = {
   0,
   0};
   Double_t Graph0_fey1069[2] = {
   89.09545,
   89.09545};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01069 = new TH1F("Graph_Graph01069","",100,-36,36);
   Graph_Graph01069->SetMinimum(-140.657);
   Graph_Graph01069->SetMaximum(159.9385);
   Graph_Graph01069->SetDirectory(0);
   Graph_Graph01069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01069->SetLineColor(ci);
   Graph_Graph01069->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01069->GetXaxis()->CenterTitle(true);
   Graph_Graph01069->GetXaxis()->SetLabelFont(42);
   Graph_Graph01069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01069->GetXaxis()->SetTitleFont(42);
   Graph_Graph01069->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
   Graph_Graph01069->GetYaxis()->CenterTitle(true);
   Graph_Graph01069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01069->GetYaxis()->SetLabelFont(42);
   Graph_Graph01069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01069->GetYaxis()->SetTitleFont(42);
   Graph_Graph01069->GetZaxis()->SetLabelFont(42);
   Graph_Graph01069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01069);
   
   
   TF1 *mainFit1070 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1070->SetFillColor(19);
   mainFit1070->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1070->SetLineColor(ci);
   mainFit1070->SetLineWidth(2);
   mainFit1070->SetChisquare(7.82679e-22);
   mainFit1070->SetNDF(0);
   mainFit1070->GetXaxis()->SetLabelFont(42);
   mainFit1070->GetXaxis()->SetTitleOffset(1);
   mainFit1070->GetXaxis()->SetTitleFont(42);
   mainFit1070->GetYaxis()->SetLabelFont(42);
   mainFit1070->GetYaxis()->SetTitleFont(42);
   mainFit1070->SetParameter(0,9.640711);
   mainFit1070->SetParError(0,63);
   mainFit1070->SetParLimits(0,0,0);
   mainFit1070->SetParameter(1,1.205089);
   mainFit1070->SetParError(1,2.1);
   mainFit1070->SetParLimits(1,0,0);
   mainFit1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1070);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.21
#pm2.1
");
   pt_LaTex = pt->AddText("9.64
#pm63
");
   pt_LaTex = pt->AddText("8
#pm54.1
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8,-140.657,-8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1071 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1071->SetFillColor(19);
   mainFit1071->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1071->SetLineColor(ci);
   mainFit1071->SetLineWidth(2);
   mainFit1071->SetChisquare(7.82679e-22);
   mainFit1071->SetNDF(0);
   mainFit1071->GetXaxis()->SetLabelFont(42);
   mainFit1071->GetXaxis()->SetTitleOffset(1);
   mainFit1071->GetXaxis()->SetTitleFont(42);
   mainFit1071->GetYaxis()->SetLabelFont(42);
   mainFit1071->GetYaxis()->SetTitleFont(42);
   mainFit1071->SetParameter(0,9.640711);
   mainFit1071->SetParError(0,63);
   mainFit1071->SetParLimits(0,0,0);
   mainFit1071->SetParameter(1,1.205089);
   mainFit1071->SetParError(1,2.1);
   mainFit1071->SetParLimits(1,0,0);
   mainFit1071->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
