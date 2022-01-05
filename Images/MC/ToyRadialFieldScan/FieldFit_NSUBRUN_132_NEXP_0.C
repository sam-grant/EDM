void FieldFit_NSUBRUN_132_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:39:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-47.42397,45,67.30547);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[2] = {
   30,
   -30};
   Double_t Graph0_fy1013[2] = {
   47.03481,
   -27.15331};
   Double_t Graph0_fex1013[2] = {
   0,
   0};
   Double_t Graph0_fey1013[2] = {
   1.149088,
   1.149088};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,-36,36);
   Graph_Graph01013->SetMinimum(-35.95102);
   Graph_Graph01013->SetMaximum(55.83253);
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
   Graph_Graph01013->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
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
   
   
   TF1 *mainFit1014 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1014->SetFillColor(19);
   mainFit1014->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1014->SetLineColor(ci);
   mainFit1014->SetLineWidth(2);
   mainFit1014->SetChisquare(1.960802e-13);
   mainFit1014->SetNDF(0);
   mainFit1014->GetXaxis()->SetLabelFont(42);
   mainFit1014->GetXaxis()->SetTitleOffset(1);
   mainFit1014->GetXaxis()->SetTitleFont(42);
   mainFit1014->GetYaxis()->SetLabelFont(42);
   mainFit1014->GetYaxis()->SetTitleFont(42);
   mainFit1014->SetParameter(0,9.940751);
   mainFit1014->SetParError(0,0.8125278);
   mainFit1014->SetParLimits(0,0,0);
   mainFit1014->SetParameter(1,1.236469);
   mainFit1014->SetParError(1,0.02708426);
   mainFit1014->SetParLimits(1,0,0);
   mainFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1014);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.24
#pm0.0271
");
   pt_LaTex = pt->AddText("9.94
#pm0.813
");
   pt_LaTex = pt->AddText("8.04
#pm0.68
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.039631,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.039631,-35.95102,-8.039631,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1015 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1015->SetFillColor(19);
   mainFit1015->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1015->SetLineColor(ci);
   mainFit1015->SetLineWidth(2);
   mainFit1015->SetChisquare(1.960802e-13);
   mainFit1015->SetNDF(0);
   mainFit1015->GetXaxis()->SetLabelFont(42);
   mainFit1015->GetXaxis()->SetTitleOffset(1);
   mainFit1015->GetXaxis()->SetTitleFont(42);
   mainFit1015->GetYaxis()->SetLabelFont(42);
   mainFit1015->GetYaxis()->SetTitleFont(42);
   mainFit1015->SetParameter(0,9.940751);
   mainFit1015->SetParError(0,0.8125278);
   mainFit1015->SetParLimits(0,0,0);
   mainFit1015->SetParameter(1,1.236469);
   mainFit1015->SetParError(1,0.02708426);
   mainFit1015->SetParLimits(1,0,0);
   mainFit1015->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
