void FieldFit_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec 16 20:33:08 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-81.55671,75,101.4867);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1141[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1141[6] = {
   -50.43445,
   -26.448,
   -1.66949,
   21.06024,
   46.38929,
   70.36485};
   Double_t Graph0_fex1141[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1141[6] = {
   0.6150242,
   0.6149784,
   0.6150249,
   0.6154755,
   0.6149809,
   0.6146527};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1141,Graph0_fy1141,Graph0_fex1141,Graph0_fey1141);
   gre->SetName("Graph0");
   gre->SetTitle("225 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01141 = new TH1F("Graph_Graph01141","225 sub-runs",100,-60,60);
   Graph_Graph01141->SetMinimum(-63.25237);
   Graph_Graph01141->SetMaximum(83.1824);
   Graph_Graph01141->SetDirectory(0);
   Graph_Graph01141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01141->SetLineColor(ci);
   Graph_Graph01141->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01141->GetXaxis()->CenterTitle(true);
   Graph_Graph01141->GetXaxis()->SetLabelFont(42);
   Graph_Graph01141->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01141->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01141->GetXaxis()->SetTitleFont(42);
   Graph_Graph01141->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01141->GetYaxis()->CenterTitle(true);
   Graph_Graph01141->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01141->GetYaxis()->SetLabelFont(42);
   Graph_Graph01141->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01141->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01141->GetYaxis()->SetTitleFont(42);
   Graph_Graph01141->GetZaxis()->SetLabelFont(42);
   Graph_Graph01141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01141);
   
   
   TF1 *mainFit1142 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1142->SetFillColor(19);
   mainFit1142->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1142->SetLineColor(ci);
   mainFit1142->SetLineWidth(2);
   mainFit1142->SetChisquare(3.126817);
   mainFit1142->SetNDF(4);
   mainFit1142->GetXaxis()->SetLabelFont(42);
   mainFit1142->GetXaxis()->SetTitleOffset(1);
   mainFit1142->GetXaxis()->SetTitleFont(42);
   mainFit1142->GetYaxis()->SetLabelFont(42);
   mainFit1142->GetYaxis()->SetTitleFont(42);
   mainFit1142->SetParameter(0,9.877319);
   mainFit1142->SetParError(0,0.2510819);
   mainFit1142->SetParLimits(0,0,0);
   mainFit1142->SetParameter(1,1.207486);
   mainFit1142->SetParError(1,0.007349299);
   mainFit1142->SetParLimits(1,0,0);
   mainFit1142->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1142);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.782");
   pt_LaTex = pt->AddText(" 1.21#pm0.00735");
   pt_LaTex = pt->AddText(" 9.88#pm0.251");
   pt_LaTex = pt->AddText(" 8.18#pm0.214");
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
   TLine *line = new TLine(-60,0,-8.180069,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.180069,-63.25237,-8.180069,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1143 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1143->SetFillColor(19);
   mainFit1143->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1143->SetLineColor(ci);
   mainFit1143->SetLineWidth(2);
   mainFit1143->SetChisquare(3.126817);
   mainFit1143->SetNDF(4);
   mainFit1143->GetXaxis()->SetLabelFont(42);
   mainFit1143->GetXaxis()->SetTitleOffset(1);
   mainFit1143->GetXaxis()->SetTitleFont(42);
   mainFit1143->GetYaxis()->SetLabelFont(42);
   mainFit1143->GetYaxis()->SetTitleFont(42);
   mainFit1143->SetParameter(0,9.877319);
   mainFit1143->SetParError(0,0.2510819);
   mainFit1143->SetParLimits(0,0,0);
   mainFit1143->SetParameter(1,1.207486);
   mainFit1143->SetParError(1,0.007349299);
   mainFit1143->SetParLimits(1,0,0);
   mainFit1143->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("225 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
