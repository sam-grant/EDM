void FieldFit_pValCheck3()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 20:29:24 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-58.81911,75,59.50556);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1036[5] = {
   50,
   30,
   10,
   -30,
   -50};
   Double_t Graph0_fy1036[5] = {
   38.94739,
   21.68935,
   7.408325,
   -24.61838,
   -37.59553};
   Double_t Graph0_fex1036[5] = {
   6.953128e-310,
   0,
   0,
   6.953128e-310,
   2.138531e-314};
   Double_t Graph0_fey1036[5] = {
   0.837395,
   0.7835351,
   0.8626627,
   0.8418898,
   1.502794};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1036,Graph0_fy1036,Graph0_fex1036,Graph0_fey1036);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01036 = new TH1F("Graph_Graph01036","",100,-60,60);
   Graph_Graph01036->SetMinimum(-46.98664);
   Graph_Graph01036->SetMaximum(47.6731);
   Graph_Graph01036->SetDirectory(0);
   Graph_Graph01036->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01036->SetLineColor(ci);
   Graph_Graph01036->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01036->GetXaxis()->CenterTitle(true);
   Graph_Graph01036->GetXaxis()->SetLabelFont(42);
   Graph_Graph01036->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01036->GetXaxis()->SetTitleFont(42);
   Graph_Graph01036->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01036->GetYaxis()->CenterTitle(true);
   Graph_Graph01036->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01036->GetYaxis()->SetLabelFont(42);
   Graph_Graph01036->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01036->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01036->GetYaxis()->SetTitleFont(42);
   Graph_Graph01036->GetZaxis()->SetLabelFont(42);
   Graph_Graph01036->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01036);
   
   
   TF1 *mainFit1037 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1037->SetFillColor(19);
   mainFit1037->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1037->SetLineColor(ci);
   mainFit1037->SetLineWidth(2);
   mainFit1037->SetChisquare(4.652533);
   mainFit1037->SetNDF(3);
   mainFit1037->GetXaxis()->SetLabelFont(42);
   mainFit1037->GetXaxis()->SetTitleOffset(1);
   mainFit1037->GetXaxis()->SetTitleFont(42);
   mainFit1037->GetYaxis()->SetLabelFont(42);
   mainFit1037->GetYaxis()->SetTitleFont(42);
   mainFit1037->SetParameter(0,-0.6805375);
   mainFit1037->SetParError(0,0.4218772);
   mainFit1037->SetParLimits(0,0,0);
   mainFit1037->SetParameter(1,0.7766749);
   mainFit1037->SetParError(1,0.0121467);
   mainFit1037->SetParLimits(1,0,0);
   mainFit1037->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1037);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.55");
   pt_LaTex = pt->AddText("0.777#pm0.0121");
   pt_LaTex = pt->AddText("#minus0.681#pm0.422");
   pt_LaTex = pt->AddText("#minus0.876#pm0.539");
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
   TLine *line = new TLine(-60,0,0.8762192,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.8762192,-46.98664,0.8762192,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1038 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1038->SetFillColor(19);
   mainFit1038->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1038->SetLineColor(ci);
   mainFit1038->SetLineWidth(2);
   mainFit1038->SetChisquare(4.652533);
   mainFit1038->SetNDF(3);
   mainFit1038->GetXaxis()->SetLabelFont(42);
   mainFit1038->GetXaxis()->SetTitleOffset(1);
   mainFit1038->GetXaxis()->SetTitleFont(42);
   mainFit1038->GetYaxis()->SetLabelFont(42);
   mainFit1038->GetYaxis()->SetTitleFont(42);
   mainFit1038->SetParameter(0,-0.6805375);
   mainFit1038->SetParError(0,0.4218772);
   mainFit1038->SetParLimits(0,0,0);
   mainFit1038->SetParameter(1,0.7766749);
   mainFit1038->SetParError(1,0.0121467);
   mainFit1038->SetParLimits(1,0,0);
   mainFit1038->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
