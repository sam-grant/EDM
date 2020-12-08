void FieldFit_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:11 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-46.45398,45,64.09712);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1153[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1153[4] = {
   -27.30124,
   -2.222035,
   23.36602,
   44.94437};
   Double_t Graph0_fex1153[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1153[4] = {
   0.7275592,
   0.7275626,
   0.7275731,
   0.7275578};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1153,Graph0_fy1153,Graph0_fex1153,Graph0_fey1153);
   gre->SetName("Graph0");
   gre->SetTitle("325 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01153 = new TH1F("Graph_Graph01153","325 sub-runs",100,-36,36);
   Graph_Graph01153->SetMinimum(-35.39887);
   Graph_Graph01153->SetMaximum(53.04201);
   Graph_Graph01153->SetDirectory(0);
   Graph_Graph01153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01153->SetLineColor(ci);
   Graph_Graph01153->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01153->GetXaxis()->CenterTitle(true);
   Graph_Graph01153->GetXaxis()->SetLabelFont(42);
   Graph_Graph01153->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01153->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01153->GetXaxis()->SetTitleFont(42);
   Graph_Graph01153->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01153->GetYaxis()->CenterTitle(true);
   Graph_Graph01153->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01153->GetYaxis()->SetLabelFont(42);
   Graph_Graph01153->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01153->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01153->GetYaxis()->SetTitleFont(42);
   Graph_Graph01153->GetZaxis()->SetLabelFont(42);
   Graph_Graph01153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01153);
   
   
   TF1 *mainFit1154 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1154->SetFillColor(19);
   mainFit1154->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1154->SetLineColor(ci);
   mainFit1154->SetLineWidth(2);
   mainFit1154->SetChisquare(7.716691);
   mainFit1154->SetNDF(2);
   mainFit1154->GetXaxis()->SetLabelFont(42);
   mainFit1154->GetXaxis()->SetTitleOffset(1);
   mainFit1154->GetXaxis()->SetTitleFont(42);
   mainFit1154->GetYaxis()->SetLabelFont(42);
   mainFit1154->GetYaxis()->SetTitleFont(42);
   mainFit1154->SetParameter(0,9.696712);
   mainFit1154->SetParError(0,0.3637816);
   mainFit1154->SetParLimits(0,0,0);
   mainFit1154->SetParameter(1,1.211623);
   mainFit1154->SetParError(1,0.01626872);
   mainFit1154->SetParLimits(1,0,0);
   mainFit1154->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1154);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 3.86");
   pt_LaTex = pt->AddText(" 1.21#pm0.0163");
   pt_LaTex = pt->AddText("  9.7#pm0.364");
   pt_LaTex = pt->AddText("    8#pm0.319");
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
   TLine *line = new TLine(-36,0,-8.003075,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.003075,-35.39887,-8.003075,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1155 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1155->SetFillColor(19);
   mainFit1155->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1155->SetLineColor(ci);
   mainFit1155->SetLineWidth(2);
   mainFit1155->SetChisquare(7.716691);
   mainFit1155->SetNDF(2);
   mainFit1155->GetXaxis()->SetLabelFont(42);
   mainFit1155->GetXaxis()->SetTitleOffset(1);
   mainFit1155->GetXaxis()->SetTitleFont(42);
   mainFit1155->GetYaxis()->SetLabelFont(42);
   mainFit1155->GetYaxis()->SetTitleFont(42);
   mainFit1155->SetParameter(0,9.696712);
   mainFit1155->SetParError(0,0.3637816);
   mainFit1155->SetParLimits(0,0,0);
   mainFit1155->SetParameter(1,1.211623);
   mainFit1155->SetParError(1,0.01626872);
   mainFit1155->SetParLimits(1,0,0);
   mainFit1155->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("325 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
