void FieldFitCheck_NSUBRUN_275_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:38 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-107.3596,75,397.6633);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1175[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1175[6] = {
   312.9741,
   -22.67045,
   -1.928133,
   17.77084,
   38.50516,
   58.11467};
   Double_t Graph0_fex1175[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1175[6] = {
   0.5186691,
   0.5186691,
   0.5186691,
   0.5186691,
   0.5186691,
   0.5186691};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1175,Graph0_fy1175,Graph0_fex1175,Graph0_fey1175);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01175 = new TH1F("Graph_Graph01175","",100,-60,60);
   Graph_Graph01175->SetMinimum(-56.85732);
   Graph_Graph01175->SetMaximum(347.161);
   Graph_Graph01175->SetDirectory(0);
   Graph_Graph01175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01175->SetLineColor(ci);
   Graph_Graph01175->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01175->GetXaxis()->CenterTitle(true);
   Graph_Graph01175->GetXaxis()->SetLabelFont(42);
   Graph_Graph01175->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01175->GetXaxis()->SetTitleFont(42);
   Graph_Graph01175->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01175->GetYaxis()->CenterTitle(true);
   Graph_Graph01175->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01175->GetYaxis()->SetLabelFont(42);
   Graph_Graph01175->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01175->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01175->GetYaxis()->SetTitleFont(42);
   Graph_Graph01175->GetZaxis()->SetLabelFont(42);
   Graph_Graph01175->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01175->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01175);
   
   
   TF1 *checkFit1176 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1176->SetFillColor(19);
   checkFit1176->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1176->SetLineColor(ci);
   checkFit1176->SetLineWidth(2);
   checkFit1176->SetChisquare(223855.2);
   checkFit1176->SetNDF(4);
   checkFit1176->GetXaxis()->SetLabelFont(42);
   checkFit1176->GetXaxis()->SetTitleOffset(1);
   checkFit1176->GetXaxis()->SetTitleFont(42);
   checkFit1176->GetYaxis()->SetLabelFont(42);
   checkFit1176->GetYaxis()->SetTitleFont(42);
   checkFit1176->SetParameter(0,67.12771);
   checkFit1176->SetParError(0,0.2117458);
   checkFit1176->SetParLimits(0,0,0);
   checkFit1176->SetParameter(1,-1.530102);
   checkFit1176->SetParError(1,0.006199281);
   checkFit1176->SetParLimits(1,0,0);
   checkFit1176->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1176);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("5.6e+04");
   pt_LaTex = pt->AddText("-1.53
#pm0.006
");
   pt_LaTex = pt->AddText("67.1
#pm0.2
");
   pt_LaTex = pt->AddText("-44
#pm0.2
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,43.87139,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(43.87139,-56.85732,43.87139,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1177 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1177->SetFillColor(19);
   checkFit1177->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1177->SetLineColor(ci);
   checkFit1177->SetLineWidth(2);
   checkFit1177->SetChisquare(223855.2);
   checkFit1177->SetNDF(4);
   checkFit1177->GetXaxis()->SetLabelFont(42);
   checkFit1177->GetXaxis()->SetTitleOffset(1);
   checkFit1177->GetXaxis()->SetTitleFont(42);
   checkFit1177->GetYaxis()->SetLabelFont(42);
   checkFit1177->GetYaxis()->SetTitleFont(42);
   checkFit1177->SetParameter(0,67.12771);
   checkFit1177->SetParError(0,0.2117458);
   checkFit1177->SetParLimits(0,0,0);
   checkFit1177->SetParameter(1,-1.530102);
   checkFit1177->SetParError(1,0.006199281);
   checkFit1177->SetParLimits(1,0,0);
   checkFit1177->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
