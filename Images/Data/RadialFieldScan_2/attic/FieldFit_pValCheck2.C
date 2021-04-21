void FieldFit_pValCheck2()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 20:23:59 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-58.81911,75,59.50556);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1034[5] = {
   50,
   30,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1034[5] = {
   38.94739,
   21.68935,
   -7.948894,
   -24.61838,
   -37.59553};
   Double_t Graph0_fex1034[5] = {
   6.95312e-310,
   0,
   6.95312e-310,
   6.95312e-310,
   2.227519e-314};
   Double_t Graph0_fey1034[5] = {
   0.837395,
   0.7835351,
   0.831122,
   0.8418898,
   1.502794};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1034,Graph0_fy1034,Graph0_fex1034,Graph0_fey1034);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01034 = new TH1F("Graph_Graph01034","",100,-60,60);
   Graph_Graph01034->SetMinimum(-46.98664);
   Graph_Graph01034->SetMaximum(47.6731);
   Graph_Graph01034->SetDirectory(0);
   Graph_Graph01034->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01034->SetLineColor(ci);
   Graph_Graph01034->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01034->GetXaxis()->CenterTitle(true);
   Graph_Graph01034->GetXaxis()->SetLabelFont(42);
   Graph_Graph01034->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01034->GetXaxis()->SetTitleFont(42);
   Graph_Graph01034->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01034->GetYaxis()->CenterTitle(true);
   Graph_Graph01034->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01034->GetYaxis()->SetLabelFont(42);
   Graph_Graph01034->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01034->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01034->GetYaxis()->SetTitleFont(42);
   Graph_Graph01034->GetZaxis()->SetLabelFont(42);
   Graph_Graph01034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01034->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01034);
   
   
   TF1 *mainFit1035 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1035->SetFillColor(19);
   mainFit1035->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1035->SetLineColor(ci);
   mainFit1035->SetLineWidth(2);
   mainFit1035->SetChisquare(4.83489);
   mainFit1035->SetNDF(3);
   mainFit1035->GetXaxis()->SetLabelFont(42);
   mainFit1035->GetXaxis()->SetTitleOffset(1);
   mainFit1035->GetXaxis()->SetTitleFont(42);
   mainFit1035->GetYaxis()->SetLabelFont(42);
   mainFit1035->GetYaxis()->SetTitleFont(42);
   mainFit1035->SetParameter(0,-0.6231786);
   mainFit1035->SetParError(0,0.4038555);
   mainFit1035->SetParLimits(0,0,0);
   mainFit1035->SetParameter(1,0.7748334);
   mainFit1035->SetParError(1,0.01171593);
   mainFit1035->SetParLimits(1,0,0);
   mainFit1035->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1035);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.61");
   pt_LaTex = pt->AddText("0.775#pm0.0117");
   pt_LaTex = pt->AddText("#minus0.623#pm0.404");
   pt_LaTex = pt->AddText("0.804#pm0.519");
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
   TLine *line = new TLine(-60,0,0.8042743,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.8042743,-46.98664,0.8042743,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1036 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1036->SetFillColor(19);
   mainFit1036->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1036->SetLineColor(ci);
   mainFit1036->SetLineWidth(2);
   mainFit1036->SetChisquare(4.83489);
   mainFit1036->SetNDF(3);
   mainFit1036->GetXaxis()->SetLabelFont(42);
   mainFit1036->GetXaxis()->SetTitleOffset(1);
   mainFit1036->GetXaxis()->SetTitleFont(42);
   mainFit1036->GetYaxis()->SetLabelFont(42);
   mainFit1036->GetYaxis()->SetTitleFont(42);
   mainFit1036->SetParameter(0,-0.6231786);
   mainFit1036->SetParError(0,0.4038555);
   mainFit1036->SetParLimits(0,0,0);
   mainFit1036->SetParameter(1,0.7748334);
   mainFit1036->SetParError(1,0.01171593);
   mainFit1036->SetParLimits(1,0,0);
   mainFit1036->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
