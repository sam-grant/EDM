void FieldFit()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 16 21:37:23 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-26.45885,45,49.43258);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1008[2] = {
   30,
   -30};
   Double_t Graph0_fy1008[2] = {
   35.76673,
   -12.76624};
   Double_t Graph0_fex1008[2] = {
   0,
   0};
   Double_t Graph0_fey1008[2] = {
   1.017277,
   1.044039};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01008 = new TH1F("Graph_Graph01008","",100,-36,36);
   Graph_Graph01008->SetMinimum(-18.86971);
   Graph_Graph01008->SetMaximum(41.84343);
   Graph_Graph01008->SetDirectory(0);
   Graph_Graph01008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01008->SetLineColor(ci);
   Graph_Graph01008->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01008->GetXaxis()->CenterTitle(true);
   Graph_Graph01008->GetXaxis()->SetLabelFont(42);
   Graph_Graph01008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01008->GetXaxis()->SetTitleFont(42);
   Graph_Graph01008->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01008->GetYaxis()->CenterTitle(true);
   Graph_Graph01008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01008->GetYaxis()->SetLabelFont(42);
   Graph_Graph01008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01008->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01008->GetYaxis()->SetTitleFont(42);
   Graph_Graph01008->GetZaxis()->SetLabelFont(42);
   Graph_Graph01008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01008);
   
   
   TF1 *mainFit1009 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1009->SetFillColor(19);
   mainFit1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1009->SetLineColor(ci);
   mainFit1009->SetLineWidth(2);
   mainFit1009->SetChisquare(1.792715e-08);
   mainFit1009->SetNDF(0);
   mainFit1009->GetXaxis()->SetLabelFont(42);
   mainFit1009->GetXaxis()->SetTitleOffset(1);
   mainFit1009->GetXaxis()->SetTitleFont(42);
   mainFit1009->GetYaxis()->SetLabelFont(42);
   mainFit1009->GetYaxis()->SetTitleFont(42);
   mainFit1009->SetParameter(0,11.50029);
   mainFit1009->SetParError(0,0.7288464);
   mainFit1009->SetParLimits(0,0,0);
   mainFit1009->SetParameter(1,0.8088799);
   mainFit1009->SetParError(1,0.02429488);
   mainFit1009->SetParLimits(1,0,0);
   mainFit1009->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1009);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("0.809#pm0.0243");
   pt_LaTex = pt->AddText(" 11.5#pm0.729");
   pt_LaTex = pt->AddText(" 14.2#pm 1.01");
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
   TLine *line = new TLine(-36,0,-14.21755,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-14.21755,-18.86971,-14.21755,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1010 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1010->SetFillColor(19);
   mainFit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1010->SetLineColor(ci);
   mainFit1010->SetLineWidth(2);
   mainFit1010->SetChisquare(1.792715e-08);
   mainFit1010->SetNDF(0);
   mainFit1010->GetXaxis()->SetLabelFont(42);
   mainFit1010->GetXaxis()->SetTitleOffset(1);
   mainFit1010->GetXaxis()->SetTitleFont(42);
   mainFit1010->GetYaxis()->SetLabelFont(42);
   mainFit1010->GetYaxis()->SetTitleFont(42);
   mainFit1010->SetParameter(0,11.50029);
   mainFit1010->SetParError(0,0.7288464);
   mainFit1010->SetParLimits(0,0,0);
   mainFit1010->SetParameter(1,0.8088799);
   mainFit1010->SetParError(1,0.02429488);
   mainFit1010->SetParLimits(1,0,0);
   mainFit1010->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
