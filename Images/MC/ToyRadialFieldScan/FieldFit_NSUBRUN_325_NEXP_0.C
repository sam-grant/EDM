void FieldFit_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec 16 20:33:14 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-81.4454,75,100.2222);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1205[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1205[6] = {
   -50.65623,
   -26.99929,
   -2.080304,
   22.21377,
   45.86374,
   69.43311};
   Double_t Graph0_fex1205[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1205[6] = {
   0.511243,
   0.5111578,
   0.5111617,
   0.5111574,
   0.5110345,
   0.5111503};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1205,Graph0_fy1205,Graph0_fex1205,Graph0_fey1205);
   gre->SetName("Graph0");
   gre->SetTitle("325 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01205 = new TH1F("Graph_Graph01205","325 sub-runs",100,-60,60);
   Graph_Graph01205->SetMinimum(-63.27864);
   Graph_Graph01205->SetMaximum(82.05543);
   Graph_Graph01205->SetDirectory(0);
   Graph_Graph01205->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01205->SetLineColor(ci);
   Graph_Graph01205->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01205->GetXaxis()->CenterTitle(true);
   Graph_Graph01205->GetXaxis()->SetLabelFont(42);
   Graph_Graph01205->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01205->GetXaxis()->SetTitleFont(42);
   Graph_Graph01205->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01205->GetYaxis()->CenterTitle(true);
   Graph_Graph01205->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01205->GetYaxis()->SetLabelFont(42);
   Graph_Graph01205->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01205->GetYaxis()->SetTitleFont(42);
   Graph_Graph01205->GetZaxis()->SetLabelFont(42);
   Graph_Graph01205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01205);
   
   
   TF1 *mainFit1206 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1206->SetFillColor(19);
   mainFit1206->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1206->SetLineColor(ci);
   mainFit1206->SetLineWidth(2);
   mainFit1206->SetChisquare(3.205915);
   mainFit1206->SetNDF(4);
   mainFit1206->GetXaxis()->SetLabelFont(42);
   mainFit1206->GetXaxis()->SetTitleOffset(1);
   mainFit1206->GetXaxis()->SetTitleFont(42);
   mainFit1206->GetYaxis()->SetLabelFont(42);
   mainFit1206->GetYaxis()->SetTitleFont(42);
   mainFit1206->SetParameter(0,9.62914);
   mainFit1206->SetParError(0,0.2086764);
   mainFit1206->SetParLimits(0,0,0);
   mainFit1206->SetParameter(1,1.204757);
   mainFit1206->SetParError(1,0.006109646);
   mainFit1206->SetParLimits(1,0,0);
   mainFit1206->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1206);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.801");
   pt_LaTex = pt->AddText("  1.2#pm0.00611");
   pt_LaTex = pt->AddText(" 9.63#pm0.209");
   pt_LaTex = pt->AddText(" 7.99#pm0.178");
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
   TLine *line = new TLine(-60,0,-7.9926,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.9926,-63.27864,-7.9926,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1207 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1207->SetFillColor(19);
   mainFit1207->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1207->SetLineColor(ci);
   mainFit1207->SetLineWidth(2);
   mainFit1207->SetChisquare(3.205915);
   mainFit1207->SetNDF(4);
   mainFit1207->GetXaxis()->SetLabelFont(42);
   mainFit1207->GetXaxis()->SetTitleOffset(1);
   mainFit1207->GetXaxis()->SetTitleFont(42);
   mainFit1207->GetYaxis()->SetLabelFont(42);
   mainFit1207->GetYaxis()->SetTitleFont(42);
   mainFit1207->SetParameter(0,9.62914);
   mainFit1207->SetParError(0,0.2086764);
   mainFit1207->SetParLimits(0,0,0);
   mainFit1207->SetParameter(1,1.204757);
   mainFit1207->SetParError(1,0.006109646);
   mainFit1207->SetParLimits(1,0,0);
   mainFit1207->Draw("same");
   
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
