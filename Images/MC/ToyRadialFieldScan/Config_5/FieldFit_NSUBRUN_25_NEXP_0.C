void FieldFit_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2416815,45,0.1760686);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1005[2] = {
   -30,
   30};
   Double_t Graph0_fy1005[2] = {
   0.0884741,
   -0.1540869};
   Double_t Graph0_fex1005[2] = {
   0,
   0};
   Double_t Graph0_fey1005[2] = {
   0.01796953,
   0.01796953};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 25");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01005 = new TH1F("Graph_Graph01005","Sub-runs 25",100,-36,36);
   Graph_Graph01005->SetMinimum(-0.1999064);
   Graph_Graph01005->SetMaximum(0.1342936);
   Graph_Graph01005->SetDirectory(0);
   Graph_Graph01005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01005->SetLineColor(ci);
   Graph_Graph01005->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01005->GetXaxis()->CenterTitle(true);
   Graph_Graph01005->GetXaxis()->SetLabelFont(42);
   Graph_Graph01005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01005->GetXaxis()->SetTitleFont(42);
   Graph_Graph01005->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01005->GetYaxis()->CenterTitle(true);
   Graph_Graph01005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01005->GetYaxis()->SetLabelFont(42);
   Graph_Graph01005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01005->GetYaxis()->SetTitleFont(42);
   Graph_Graph01005->GetZaxis()->SetLabelFont(42);
   Graph_Graph01005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01005);
   
   
   TF1 *mainFit1006 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1006->SetFillColor(19);
   mainFit1006->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1006->SetLineColor(ci);
   mainFit1006->SetLineWidth(2);
   mainFit1006->SetChisquare(1.473123e-14);
   mainFit1006->SetNDF(0);
   mainFit1006->GetXaxis()->SetLabelFont(42);
   mainFit1006->GetXaxis()->SetTitleOffset(1);
   mainFit1006->GetXaxis()->SetTitleFont(42);
   mainFit1006->GetYaxis()->SetLabelFont(42);
   mainFit1006->GetYaxis()->SetTitleFont(42);
   mainFit1006->SetParameter(0,-0.03280641);
   mainFit1006->SetParError(0,0.01270637);
   mainFit1006->SetParLimits(0,0,0);
   mainFit1006->SetParameter(1,-0.004042684);
   mainFit1006->SetParError(1,0.0004235458);
   mainFit1006->SetParLimits(1,0,0);
   mainFit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1006);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("#minus0.00404#pm0.000424");
   pt_LaTex = pt->AddText("#minus0.0328#pm0.0127");
   pt_LaTex = pt->AddText("#minus8.12#pm 3.26");
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
   TLine *line = new TLine(-36,0,-8.115008,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.115008,-0.1999064,-8.115008,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1007 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1007->SetFillColor(19);
   mainFit1007->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1007->SetLineColor(ci);
   mainFit1007->SetLineWidth(2);
   mainFit1007->SetChisquare(1.473123e-14);
   mainFit1007->SetNDF(0);
   mainFit1007->GetXaxis()->SetLabelFont(42);
   mainFit1007->GetXaxis()->SetTitleOffset(1);
   mainFit1007->GetXaxis()->SetTitleFont(42);
   mainFit1007->GetYaxis()->SetLabelFont(42);
   mainFit1007->GetYaxis()->SetTitleFont(42);
   mainFit1007->SetParameter(0,-0.03280641);
   mainFit1007->SetParError(0,0.01270637);
   mainFit1007->SetParLimits(0,0,0);
   mainFit1007->SetParameter(1,-0.004042684);
   mainFit1007->SetParError(1,0.0004235458);
   mainFit1007->SetParLimits(1,0,0);
   mainFit1007->Draw("same");
   
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
