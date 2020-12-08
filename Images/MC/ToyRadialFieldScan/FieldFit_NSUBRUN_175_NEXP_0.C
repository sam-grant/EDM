void FieldFit_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-46.46579,45,65.19148);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1081[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1081[4] = {
   -26.86241,
   -2.5703,
   20.65272,
   45.5881};
   Double_t Graph0_fex1081[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1081[4] = {
   0.9938301,
   0.9938287,
   0.9936079,
   0.9938358};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1081,Graph0_fy1081,Graph0_fex1081,Graph0_fey1081);
   gre->SetName("Graph0");
   gre->SetTitle("175 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01081 = new TH1F("Graph_Graph01081","175 sub-runs",100,-36,36);
   Graph_Graph01081->SetMinimum(-35.30006);
   Graph_Graph01081->SetMaximum(54.02575);
   Graph_Graph01081->SetDirectory(0);
   Graph_Graph01081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01081->SetLineColor(ci);
   Graph_Graph01081->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01081->GetXaxis()->CenterTitle(true);
   Graph_Graph01081->GetXaxis()->SetLabelFont(42);
   Graph_Graph01081->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01081->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01081->GetXaxis()->SetTitleFont(42);
   Graph_Graph01081->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01081->GetYaxis()->CenterTitle(true);
   Graph_Graph01081->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01081->GetYaxis()->SetLabelFont(42);
   Graph_Graph01081->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01081->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01081->GetYaxis()->SetTitleFont(42);
   Graph_Graph01081->GetZaxis()->SetLabelFont(42);
   Graph_Graph01081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01081);
   
   
   TF1 *mainFit1082 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1082->SetFillColor(19);
   mainFit1082->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1082->SetLineColor(ci);
   mainFit1082->SetLineWidth(2);
   mainFit1082->SetChisquare(0.4965232);
   mainFit1082->SetNDF(2);
   mainFit1082->GetXaxis()->SetLabelFont(42);
   mainFit1082->GetXaxis()->SetTitleOffset(1);
   mainFit1082->GetXaxis()->SetTitleFont(42);
   mainFit1082->GetYaxis()->SetLabelFont(42);
   mainFit1082->GetYaxis()->SetTitleFont(42);
   mainFit1082->SetParameter(0,9.201963);
   mainFit1082->SetParError(0,0.4968877);
   mainFit1082->SetParLimits(0,0,0);
   mainFit1082->SetParameter(1,1.202871);
   mainFit1082->SetParError(1,0.02222253);
   mainFit1082->SetParLimits(1,0,0);
   mainFit1082->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1082);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.248");
   pt_LaTex = pt->AddText("  1.2#pm0.0222");
   pt_LaTex = pt->AddText("  9.2#pm0.497");
   pt_LaTex = pt->AddText(" 7.65#pm0.437");
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
   TLine *line = new TLine(-36,0,-7.649997,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.649997,-35.30006,-7.649997,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1083 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1083->SetFillColor(19);
   mainFit1083->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1083->SetLineColor(ci);
   mainFit1083->SetLineWidth(2);
   mainFit1083->SetChisquare(0.4965232);
   mainFit1083->SetNDF(2);
   mainFit1083->GetXaxis()->SetLabelFont(42);
   mainFit1083->GetXaxis()->SetTitleOffset(1);
   mainFit1083->GetXaxis()->SetTitleFont(42);
   mainFit1083->GetYaxis()->SetLabelFont(42);
   mainFit1083->GetYaxis()->SetTitleFont(42);
   mainFit1083->SetParameter(0,9.201963);
   mainFit1083->SetParError(0,0.4968877);
   mainFit1083->SetParLimits(0,0,0);
   mainFit1083->SetParameter(1,1.202871);
   mainFit1083->SetParError(1,0.02222253);
   mainFit1083->SetParLimits(1,0,0);
   mainFit1083->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("175 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
