void FieldFit()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec 10 13:35:22 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-28.36674,45,53.94146);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[2] = {
   30,
   -30};
   Double_t Graph0_fy1001[2] = {
   38.73574,
   -13.0887};
   Double_t Graph0_fex1001[2] = {
   0,
   0};
   Double_t Graph0_fey1001[2] = {
   1.487694,
   1.560014};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT QHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,-36,36);
   Graph_Graph01001->SetMinimum(-20.13592);
   Graph_Graph01001->SetMaximum(45.71064);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   
   TF1 *mainFit1002 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1002->SetFillColor(19);
   mainFit1002->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1002->SetLineColor(ci);
   mainFit1002->SetLineWidth(2);
   mainFit1002->SetChisquare(4.973781e-07);
   mainFit1002->SetNDF(0);
   mainFit1002->GetXaxis()->SetLabelFont(42);
   mainFit1002->GetXaxis()->SetTitleOffset(1);
   mainFit1002->GetXaxis()->SetTitleFont(42);
   mainFit1002->GetYaxis()->SetLabelFont(42);
   mainFit1002->GetYaxis()->SetTitleFont(42);
   mainFit1002->SetParameter(0,12.8239);
   mainFit1002->SetParError(0,1.077831);
   mainFit1002->SetParLimits(0,0,0);
   mainFit1002->SetParameter(1,0.8637179);
   mainFit1002->SetParError(1,0.03592769);
   mainFit1002->SetParLimits(1,0,0);
   mainFit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1002);
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
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
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
   
   TF1 *mainFit1003 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1003->SetFillColor(19);
   mainFit1003->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1003->SetLineColor(ci);
   mainFit1003->SetLineWidth(2);
   mainFit1003->SetChisquare(4.973781e-07);
   mainFit1003->SetNDF(0);
   mainFit1003->GetXaxis()->SetLabelFont(42);
   mainFit1003->GetXaxis()->SetTitleOffset(1);
   mainFit1003->GetXaxis()->SetTitleFont(42);
   mainFit1003->GetYaxis()->SetLabelFont(42);
   mainFit1003->GetYaxis()->SetTitleFont(42);
   mainFit1003->SetParameter(0,12.8239);
   mainFit1003->SetParError(0,1.077831);
   mainFit1003->SetParLimits(0,0,0);
   mainFit1003->SetParameter(1,0.8637179);
   mainFit1003->SetParError(1,0.03592769);
   mainFit1003->SetParLimits(1,0,0);
   mainFit1003->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
