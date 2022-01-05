void FieldFit_NSUBRUN_60_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:09:14 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-49.06236,45,70.03545);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1045[2] = {
   30,
   -30};
   Double_t Graph0_fy1045[2] = {
   48.48274,
   -27.50965};
   Double_t Graph0_fex1045[2] = {
   0,
   0};
   Double_t Graph0_fey1045[2] = {
   1.703069,
   1.703069};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1045,Graph0_fy1045,Graph0_fex1045,Graph0_fey1045);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01045 = new TH1F("Graph_Graph01045","",100,-36,36);
   Graph_Graph01045->SetMinimum(-37.15257);
   Graph_Graph01045->SetMaximum(58.12566);
   Graph_Graph01045->SetDirectory(0);
   Graph_Graph01045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01045->SetLineColor(ci);
   Graph_Graph01045->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01045->GetXaxis()->CenterTitle(true);
   Graph_Graph01045->GetXaxis()->SetLabelFont(42);
   Graph_Graph01045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01045->GetXaxis()->SetTitleFont(42);
   Graph_Graph01045->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
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
   
   
   TF1 *mainFit1046 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1046->SetFillColor(19);
   mainFit1046->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1046->SetLineColor(ci);
   mainFit1046->SetLineWidth(2);
   mainFit1046->SetChisquare(6.694534e-14);
   mainFit1046->SetNDF(0);
   mainFit1046->GetXaxis()->SetLabelFont(42);
   mainFit1046->GetXaxis()->SetTitleOffset(1);
   mainFit1046->GetXaxis()->SetTitleFont(42);
   mainFit1046->GetYaxis()->SetLabelFont(42);
   mainFit1046->GetYaxis()->SetTitleFont(42);
   mainFit1046->SetParameter(0,10.48655);
   mainFit1046->SetParError(0,1.204252);
   mainFit1046->SetParLimits(0,0,0);
   mainFit1046->SetParameter(1,1.26654);
   mainFit1046->SetParError(1,0.04014173);
   mainFit1046->SetParLimits(1,0,0);
   mainFit1046->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1046);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("1.3
#pm0.04
");
   pt_LaTex = pt->AddText("1e+01
#pm1
");
   pt_LaTex = pt->AddText("8
#pm1
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.27968,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.27968,-37.15257,-8.27968,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1047 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1047->SetFillColor(19);
   mainFit1047->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1047->SetLineColor(ci);
   mainFit1047->SetLineWidth(2);
   mainFit1047->SetChisquare(6.694534e-14);
   mainFit1047->SetNDF(0);
   mainFit1047->GetXaxis()->SetLabelFont(42);
   mainFit1047->GetXaxis()->SetTitleOffset(1);
   mainFit1047->GetXaxis()->SetTitleFont(42);
   mainFit1047->GetYaxis()->SetLabelFont(42);
   mainFit1047->GetYaxis()->SetTitleFont(42);
   mainFit1047->SetParameter(0,10.48655);
   mainFit1047->SetParError(0,1.204252);
   mainFit1047->SetParLimits(0,0,0);
   mainFit1047->SetParameter(1,1.26654);
   mainFit1047->SetParError(1,0.04014173);
   mainFit1047->SetParLimits(1,0,0);
   mainFit1047->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
