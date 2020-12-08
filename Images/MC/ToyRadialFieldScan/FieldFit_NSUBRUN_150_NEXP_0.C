void FieldFit_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:00 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-44.88844,45,62.02658);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1069[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1069[4] = {
   -25.9951,
   -2.501014,
   21.05094,
   43.13327};
   Double_t Graph0_fex1069[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1069[4] = {
   1.074171,
   1.074205,
   1.074432,
   1.074142};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle("150 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01069 = new TH1F("Graph_Graph01069","150 sub-runs",100,-36,36);
   Graph_Graph01069->SetMinimum(-34.19694);
   Graph_Graph01069->SetMaximum(51.33508);
   Graph_Graph01069->SetDirectory(0);
   Graph_Graph01069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01069->SetLineColor(ci);
   Graph_Graph01069->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01069->GetXaxis()->CenterTitle(true);
   Graph_Graph01069->GetXaxis()->SetLabelFont(42);
   Graph_Graph01069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01069->GetXaxis()->SetTitleFont(42);
   Graph_Graph01069->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
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
   
   
   TF1 *mainFit1070 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1070->SetFillColor(19);
   mainFit1070->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1070->SetLineColor(ci);
   mainFit1070->SetLineWidth(2);
   mainFit1070->SetChisquare(0.5328014);
   mainFit1070->SetNDF(2);
   mainFit1070->GetXaxis()->SetLabelFont(42);
   mainFit1070->GetXaxis()->SetTitleOffset(1);
   mainFit1070->GetXaxis()->SetTitleFont(42);
   mainFit1070->GetYaxis()->SetLabelFont(42);
   mainFit1070->GetYaxis()->SetTitleFont(42);
   mainFit1070->SetParameter(0,8.921945);
   mainFit1070->SetParError(0,0.5371186);
   mainFit1070->SetParLimits(0,0,0);
   mainFit1070->SetParameter(1,1.154684);
   mainFit1070->SetParError(1,0.02401923);
   mainFit1070->SetParLimits(1,0,0);
   mainFit1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1070);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.266");
   pt_LaTex = pt->AddText(" 1.15#pm0.024");
   pt_LaTex = pt->AddText(" 8.92#pm0.537");
   pt_LaTex = pt->AddText(" 7.73#pm0.492");
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
   TLine *line = new TLine(-36,0,-7.726745,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.726745,-34.19694,-7.726745,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1071 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1071->SetFillColor(19);
   mainFit1071->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1071->SetLineColor(ci);
   mainFit1071->SetLineWidth(2);
   mainFit1071->SetChisquare(0.5328014);
   mainFit1071->SetNDF(2);
   mainFit1071->GetXaxis()->SetLabelFont(42);
   mainFit1071->GetXaxis()->SetTitleOffset(1);
   mainFit1071->GetXaxis()->SetTitleFont(42);
   mainFit1071->GetYaxis()->SetLabelFont(42);
   mainFit1071->GetYaxis()->SetTitleFont(42);
   mainFit1071->SetParameter(0,8.921945);
   mainFit1071->SetParError(0,0.5371186);
   mainFit1071->SetParLimits(0,0,0);
   mainFit1071->SetParameter(1,1.154684);
   mainFit1071->SetParError(1,0.02401923);
   mainFit1071->SetParLimits(1,0,0);
   mainFit1071->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("150 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
