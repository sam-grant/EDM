void FieldFit()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 23:55:19 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-28.36674,45,53.94146);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1010[2] = {
   30,
   -30};
   Double_t Graph0_fy1010[2] = {
   38.73573,
   -13.08869};
   Double_t Graph0_fex1010[2] = {
   0,
   0};
   Double_t Graph0_fey1010[2] = {
   1.487694,
   1.560014};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01010 = new TH1F("Graph_Graph01010","",100,-36,36);
   Graph_Graph01010->SetMinimum(-20.13592);
   Graph_Graph01010->SetMaximum(45.71064);
   Graph_Graph01010->SetDirectory(0);
   Graph_Graph01010->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01010->SetLineColor(ci);
   Graph_Graph01010->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01010->GetXaxis()->CenterTitle(true);
   Graph_Graph01010->GetXaxis()->SetLabelFont(42);
   Graph_Graph01010->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01010->GetXaxis()->SetTitleFont(42);
   Graph_Graph01010->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01010->GetYaxis()->CenterTitle(true);
   Graph_Graph01010->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01010->GetYaxis()->SetLabelFont(42);
   Graph_Graph01010->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01010->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01010->GetYaxis()->SetTitleFont(42);
   Graph_Graph01010->GetZaxis()->SetLabelFont(42);
   Graph_Graph01010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01010);
   
   
   TF1 *mainFit1011 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1011->SetFillColor(19);
   mainFit1011->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1011->SetLineColor(ci);
   mainFit1011->SetLineWidth(2);
   mainFit1011->SetChisquare(4.973813e-07);
   mainFit1011->SetNDF(0);
   mainFit1011->GetXaxis()->SetLabelFont(42);
   mainFit1011->GetXaxis()->SetTitleOffset(1);
   mainFit1011->GetXaxis()->SetTitleFont(42);
   mainFit1011->GetYaxis()->SetLabelFont(42);
   mainFit1011->GetYaxis()->SetTitleFont(42);
   mainFit1011->SetParameter(0,12.82389);
   mainFit1011->SetParError(0,1.077831);
   mainFit1011->SetParLimits(0,0,0);
   mainFit1011->SetParameter(1,0.8637178);
   mainFit1011->SetParError(1,0.03592769);
   mainFit1011->SetParLimits(1,0,0);
   mainFit1011->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1011);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("0.864#pm0.0359");
   pt_LaTex = pt->AddText(" 12.8#pm 1.08");
   pt_LaTex = pt->AddText(" 14.8#pm 1.42");
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
   TLine *line = new TLine(-36,0,-14.84732,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-14.84732,-20.13592,-14.84732,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1012 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1012->SetFillColor(19);
   mainFit1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1012->SetLineColor(ci);
   mainFit1012->SetLineWidth(2);
   mainFit1012->SetChisquare(4.973813e-07);
   mainFit1012->SetNDF(0);
   mainFit1012->GetXaxis()->SetLabelFont(42);
   mainFit1012->GetXaxis()->SetTitleOffset(1);
   mainFit1012->GetXaxis()->SetTitleFont(42);
   mainFit1012->GetYaxis()->SetLabelFont(42);
   mainFit1012->GetYaxis()->SetTitleFont(42);
   mainFit1012->SetParameter(0,12.82389);
   mainFit1012->SetParError(0,1.077831);
   mainFit1012->SetParLimits(0,0,0);
   mainFit1012->SetParameter(1,0.8637178);
   mainFit1012->SetParError(1,0.03592769);
   mainFit1012->SetParLimits(1,0,0);
   mainFit1012->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
