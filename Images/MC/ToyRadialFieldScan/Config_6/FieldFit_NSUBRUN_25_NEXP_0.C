void FieldFit_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:52:20 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2404045,45,0.1758133);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1009[4] = {
   0.0884741,
   0.01054272,
   -0.09237224,
   -0.1530654};
   Double_t Graph0_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1009[4] = {
   0.01796953,
   0.01796953,
   0.01796953,
   0.01796953};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 25");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","Sub-runs 25",100,-36,36);
   Graph_Graph01009->SetMinimum(-0.1987828);
   Graph_Graph01009->SetMaximum(0.1341915);
   Graph_Graph01009->SetDirectory(0);
   Graph_Graph01009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01009->SetLineColor(ci);
   Graph_Graph01009->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01009->GetXaxis()->CenterTitle(true);
   Graph_Graph01009->GetXaxis()->SetLabelFont(42);
   Graph_Graph01009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01009->GetXaxis()->SetTitleFont(42);
   Graph_Graph01009->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01009->GetYaxis()->CenterTitle(true);
   Graph_Graph01009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01009->GetYaxis()->SetLabelFont(42);
   Graph_Graph01009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01009->GetYaxis()->SetTitleFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelFont(42);
   Graph_Graph01009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01009);
   
   
   TF1 *mainFit1010 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1010->SetFillColor(19);
   mainFit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1010->SetLineColor(ci);
   mainFit1010->SetLineWidth(2);
   mainFit1010->SetChisquare(0.9294324);
   mainFit1010->SetNDF(2);
   mainFit1010->GetXaxis()->SetLabelFont(42);
   mainFit1010->GetXaxis()->SetTitleOffset(1);
   mainFit1010->GetXaxis()->SetTitleFont(42);
   mainFit1010->GetYaxis()->SetLabelFont(42);
   mainFit1010->GetYaxis()->SetTitleFont(42);
   mainFit1010->SetParameter(0,-0.0366052);
   mainFit1010->SetParError(0,0.008984764);
   mainFit1010->SetParLimits(0,0,0);
   mainFit1010->SetParameter(1,-0.004137667);
   mainFit1010->SetParError(1,0.0004018108);
   mainFit1010->SetParLimits(1,0,0);
   mainFit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1010);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.465");
   pt_LaTex = pt->AddText("#minus0.00414#pm0.000402");
   pt_LaTex = pt->AddText("#minus0.0366#pm0.00898");
   pt_LaTex = pt->AddText("#minus8.85#pm 2.34");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.846821,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.846821,-0.1987828,-8.846821,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1011 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1011->SetFillColor(19);
   mainFit1011->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1011->SetLineColor(ci);
   mainFit1011->SetLineWidth(2);
   mainFit1011->SetChisquare(0.9294324);
   mainFit1011->SetNDF(2);
   mainFit1011->GetXaxis()->SetLabelFont(42);
   mainFit1011->GetXaxis()->SetTitleOffset(1);
   mainFit1011->GetXaxis()->SetTitleFont(42);
   mainFit1011->GetYaxis()->SetLabelFont(42);
   mainFit1011->GetYaxis()->SetTitleFont(42);
   mainFit1011->SetParameter(0,-0.0366052);
   mainFit1011->SetParError(0,0.008984764);
   mainFit1011->SetParLimits(0,0,0);
   mainFit1011->SetParameter(1,-0.004137667);
   mainFit1011->SetParError(1,0.0004018108);
   mainFit1011->SetParLimits(1,0,0);
   mainFit1011->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 25");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
