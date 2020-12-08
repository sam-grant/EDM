void FieldFit_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:07:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-44.1774,45,63.36072);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1045[4] = {
   -24.9347,
   -3.699276,
   20.0331,
   44.11802};
   Double_t Graph0_fex1045[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1045[4] = {
   1.319677,
   1.31969,
   1.319676,
   1.319676};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle("100 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","100 sub-runs",100,-36,36);
   Graph_Graph01045->SetMinimum(-33.42359);
   Graph_Graph01045->SetMaximum(52.60691);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01045->GetYaxis()->CenterTitle(true);
   Graph_Graph01045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01045->GetYaxis()->SetLabelFont(42);
   Graph_Graph01045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01045->GetYaxis()->SetTitleFont(42);
   Graph_Graph01045->GetZaxis()->SetLabelFont(42);
   Graph_Graph01045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01045);
   
   
   TF1 *mainFit1046 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1046->SetFillColor(19);
   mainFit1046->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1046->SetLineColor(ci);
   mainFit1046->SetLineWidth(2);
   mainFit1046->SetChisquare(1.297587);
   mainFit1046->SetNDF(2);
   mainFit1046->GetXaxis()->SetLabelFont(42);
   mainFit1046->GetXaxis()->SetTitleOffset(1);
   mainFit1046->GetXaxis()->SetTitleFont(42);
   mainFit1046->GetYaxis()->SetLabelFont(42);
   mainFit1046->GetYaxis()->SetTitleFont(42);
   mainFit1046->SetParameter(0,8.879357);
   mainFit1046->SetParError(0,0.6598398);
   mainFit1046->SetParLimits(0,0,0);
   mainFit1046->SetParameter(1,1.154454);
   mainFit1046->SetParError(1,0.02950887);
   mainFit1046->SetParLimits(1,0,0);
   mainFit1046->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1046);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.649");
   pt_LaTex = pt->AddText(" 1.15#pm0.0295");
   pt_LaTex = pt->AddText(" 8.88#pm 0.66");
   pt_LaTex = pt->AddText(" 7.69#pm0.604");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-7.691393,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.691393,-33.42359,-7.691393,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1047 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1047->SetFillColor(19);
   mainFit1047->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1047->SetLineColor(ci);
   mainFit1047->SetLineWidth(2);
   mainFit1047->SetChisquare(1.297587);
   mainFit1047->SetNDF(2);
   mainFit1047->GetXaxis()->SetLabelFont(42);
   mainFit1047->GetXaxis()->SetTitleOffset(1);
   mainFit1047->GetXaxis()->SetTitleFont(42);
   mainFit1047->GetYaxis()->SetLabelFont(42);
   mainFit1047->GetYaxis()->SetTitleFont(42);
   mainFit1047->SetParameter(0,8.879357);
   mainFit1047->SetParError(0,0.6598398);
   mainFit1047->SetParLimits(0,0,0);
   mainFit1047->SetParameter(1,1.154454);
   mainFit1047->SetParError(1,0.02950887);
   mainFit1047->SetParLimits(1,0,0);
   mainFit1047->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("100 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
