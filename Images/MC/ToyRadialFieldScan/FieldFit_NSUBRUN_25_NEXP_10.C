void FieldFit_NSUBRUN_25_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-89.35764,75,107.7128);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1013[6] = {
   -52.78753,
   -25.71007,
   -2.423576,
   21.71105,
   47.31936,
   72.90929};
   Double_t Graph0_fex1013[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1013[6] = {
   3.725035,
   1.956039,
   1.955971,
   2.088973,
   1.956142,
   1.958444};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,-60,60);
   Graph_Graph01013->SetMinimum(-69.65059);
   Graph_Graph01013->SetMaximum(88.00577);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   
   TF1 *mainFit1014 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1014->SetFillColor(19);
   mainFit1014->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1014->SetLineColor(ci);
   mainFit1014->SetLineWidth(2);
   mainFit1014->SetChisquare(0.8110791);
   mainFit1014->SetNDF(4);
   mainFit1014->GetXaxis()->SetLabelFont(42);
   mainFit1014->GetXaxis()->SetTitleOffset(1);
   mainFit1014->GetXaxis()->SetTitleFont(42);
   mainFit1014->GetYaxis()->SetLabelFont(42);
   mainFit1014->GetYaxis()->SetTitleFont(42);
   mainFit1014->SetParameter(0,10.32735);
   mainFit1014->SetParError(0,0.8822915);
   mainFit1014->SetParLimits(0,0,0);
   mainFit1014->SetParameter(1,1.23959);
   mainFit1014->SetParError(1,0.02784441);
   mainFit1014->SetParLimits(1,0,0);
   mainFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1014);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.203");
   pt_LaTex = pt->AddText("1.24
#pm0.03
");
   pt_LaTex = pt->AddText("10.3
#pm0.9
");
   pt_LaTex = pt->AddText("8.3
#pm0.8
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
   TLine *line = new TLine(-60,0,-8.331263,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.331263,-69.65059,-8.331263,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1015 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1015->SetFillColor(19);
   mainFit1015->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1015->SetLineColor(ci);
   mainFit1015->SetLineWidth(2);
   mainFit1015->SetChisquare(0.8110791);
   mainFit1015->SetNDF(4);
   mainFit1015->GetXaxis()->SetLabelFont(42);
   mainFit1015->GetXaxis()->SetTitleOffset(1);
   mainFit1015->GetXaxis()->SetTitleFont(42);
   mainFit1015->GetYaxis()->SetLabelFont(42);
   mainFit1015->GetYaxis()->SetTitleFont(42);
   mainFit1015->SetParameter(0,10.32735);
   mainFit1015->SetParError(0,0.8822915);
   mainFit1015->SetParLimits(0,0,0);
   mainFit1015->SetParameter(1,1.23959);
   mainFit1015->SetParError(1,0.02784441);
   mainFit1015->SetParLimits(1,0,0);
   mainFit1015->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
