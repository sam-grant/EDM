void FieldFit_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:03 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-44.36916,45,63.43408);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1093[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1093[4] = {
   -25.47323,
   -1.419893,
   20.53783,
   44.5379};
   Double_t Graph0_fex1093[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1093[4] = {
   0.9287228,
   0.9289554,
   0.928678,
   0.928974};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1093,Graph0_fy1093,Graph0_fex1093,Graph0_fey1093);
   gre->SetName("Graph0");
   gre->SetTitle("200 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01093 = new TH1F("Graph_Graph01093","200 sub-runs",100,-36,36);
   Graph_Graph01093->SetMinimum(-33.58883);
   Graph_Graph01093->SetMaximum(52.65376);
   Graph_Graph01093->SetDirectory(0);
   Graph_Graph01093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01093->SetLineColor(ci);
   Graph_Graph01093->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01093->GetXaxis()->CenterTitle(true);
   Graph_Graph01093->GetXaxis()->SetLabelFont(42);
   Graph_Graph01093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01093->GetXaxis()->SetTitleFont(42);
   Graph_Graph01093->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01093->GetYaxis()->CenterTitle(true);
   Graph_Graph01093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01093->GetYaxis()->SetLabelFont(42);
   Graph_Graph01093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01093->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01093->GetYaxis()->SetTitleFont(42);
   Graph_Graph01093->GetZaxis()->SetLabelFont(42);
   Graph_Graph01093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01093);
   
   
   TF1 *mainFit1094 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1094->SetFillColor(19);
   mainFit1094->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1094->SetLineColor(ci);
   mainFit1094->SetLineWidth(2);
   mainFit1094->SetChisquare(0.9931959);
   mainFit1094->SetNDF(2);
   mainFit1094->GetXaxis()->SetLabelFont(42);
   mainFit1094->GetXaxis()->SetTitleOffset(1);
   mainFit1094->GetXaxis()->SetTitleFont(42);
   mainFit1094->GetYaxis()->SetLabelFont(42);
   mainFit1094->GetYaxis()->SetTitleFont(42);
   mainFit1094->SetParameter(0,9.545532);
   mainFit1094->SetParError(0,0.4644163);
   mainFit1094->SetParLimits(0,0,0);
   mainFit1094->SetParameter(1,1.159955);
   mainFit1094->SetParError(1,0.02076961);
   mainFit1094->SetParLimits(1,0,0);
   mainFit1094->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1094);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.497");
   pt_LaTex = pt->AddText(" 1.16#pm0.0208");
   pt_LaTex = pt->AddText(" 9.55#pm0.464");
   pt_LaTex = pt->AddText(" 8.23#pm0.427");
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
   TLine *line = new TLine(-36,0,-8.229225,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.229225,-33.58883,-8.229225,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1095 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1095->SetFillColor(19);
   mainFit1095->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1095->SetLineColor(ci);
   mainFit1095->SetLineWidth(2);
   mainFit1095->SetChisquare(0.9931959);
   mainFit1095->SetNDF(2);
   mainFit1095->GetXaxis()->SetLabelFont(42);
   mainFit1095->GetXaxis()->SetTitleOffset(1);
   mainFit1095->GetXaxis()->SetTitleFont(42);
   mainFit1095->GetYaxis()->SetLabelFont(42);
   mainFit1095->GetYaxis()->SetTitleFont(42);
   mainFit1095->SetParameter(0,9.545532);
   mainFit1095->SetParError(0,0.4644163);
   mainFit1095->SetParLimits(0,0,0);
   mainFit1095->SetParameter(1,1.159955);
   mainFit1095->SetParError(1,0.02076961);
   mainFit1095->SetParLimits(1,0,0);
   mainFit1095->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("200 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
