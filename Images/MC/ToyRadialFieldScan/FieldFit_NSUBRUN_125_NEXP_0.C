void FieldFit_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:07:59 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-43.39749,45,62.98642);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1057[4] = {
   -24.48885,
   -3.102642,
   19.50146,
   44.07767};
   Double_t Graph0_fex1057[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1057[4] = {
   1.177991,
   1.178047,
   1.178043,
   1.178097};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("125 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","125 sub-runs",100,-36,36);
   Graph_Graph01057->SetMinimum(-32.7591);
   Graph_Graph01057->SetMaximum(52.34803);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
   
   TF1 *mainFit1058 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1058->SetFillColor(19);
   mainFit1058->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1058->SetLineColor(ci);
   mainFit1058->SetLineWidth(2);
   mainFit1058->SetChisquare(1.853642);
   mainFit1058->SetNDF(2);
   mainFit1058->GetXaxis()->SetLabelFont(42);
   mainFit1058->GetXaxis()->SetTitleOffset(1);
   mainFit1058->GetXaxis()->SetTitleFont(42);
   mainFit1058->GetYaxis()->SetLabelFont(42);
   mainFit1058->GetYaxis()->SetTitleFont(42);
   mainFit1058->SetParameter(0,8.996911);
   mainFit1058->SetParError(0,0.5890224);
   mainFit1058->SetParLimits(0,0,0);
   mainFit1058->SetParameter(1,1.141516);
   mainFit1058->SetParError(1,0.02634187);
   mainFit1058->SetParLimits(1,0,0);
   mainFit1058->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1058);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.927");
   pt_LaTex = pt->AddText(" 1.14#pm0.0263");
   pt_LaTex = pt->AddText("    9#pm0.589");
   pt_LaTex = pt->AddText(" 7.88#pm0.547");
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
   TLine *line = new TLine(-36,0,-7.881545,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.881545,-32.7591,-7.881545,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1059 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1059->SetFillColor(19);
   mainFit1059->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1059->SetLineColor(ci);
   mainFit1059->SetLineWidth(2);
   mainFit1059->SetChisquare(1.853642);
   mainFit1059->SetNDF(2);
   mainFit1059->GetXaxis()->SetLabelFont(42);
   mainFit1059->GetXaxis()->SetTitleOffset(1);
   mainFit1059->GetXaxis()->SetTitleFont(42);
   mainFit1059->GetYaxis()->SetLabelFont(42);
   mainFit1059->GetYaxis()->SetTitleFont(42);
   mainFit1059->SetParameter(0,8.996911);
   mainFit1059->SetParError(0,0.5890224);
   mainFit1059->SetParLimits(0,0,0);
   mainFit1059->SetParameter(1,1.141516);
   mainFit1059->SetParError(1,0.02634187);
   mainFit1059->SetParLimits(1,0,0);
   mainFit1059->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("125 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
