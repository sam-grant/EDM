void FieldFit_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2478123,45,0.1719509);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1053[2] = {
   -30,
   30};
   Double_t Graph0_fy1053[2] = {
   0.09513339,
   -0.1709948};
   Double_t Graph0_fex1053[2] = {
   0,
   0};
   Double_t Graph0_fey1053[2] = {
   0.006856961,
   0.006856961};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 175");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01053 = new TH1F("Graph_Graph01053","Sub-runs 175",100,-36,36);
   Graph_Graph01053->SetMinimum(-0.2058359);
   Graph_Graph01053->SetMaximum(0.1299746);
   Graph_Graph01053->SetDirectory(0);
   Graph_Graph01053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01053->SetLineColor(ci);
   Graph_Graph01053->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01053->GetXaxis()->CenterTitle(true);
   Graph_Graph01053->GetXaxis()->SetLabelFont(42);
   Graph_Graph01053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01053->GetXaxis()->SetTitleFont(42);
   Graph_Graph01053->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01053->GetYaxis()->CenterTitle(true);
   Graph_Graph01053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01053->GetYaxis()->SetLabelFont(42);
   Graph_Graph01053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01053->GetYaxis()->SetTitleFont(42);
   Graph_Graph01053->GetZaxis()->SetLabelFont(42);
   Graph_Graph01053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01053);
   
   
   TF1 *mainFit1054 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1054->SetFillColor(19);
   mainFit1054->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1054->SetLineColor(ci);
   mainFit1054->SetLineWidth(2);
   mainFit1054->SetChisquare(1.047158e-13);
   mainFit1054->SetNDF(0);
   mainFit1054->GetXaxis()->SetLabelFont(42);
   mainFit1054->GetXaxis()->SetTitleOffset(1);
   mainFit1054->GetXaxis()->SetTitleFont(42);
   mainFit1054->GetYaxis()->SetLabelFont(42);
   mainFit1054->GetYaxis()->SetTitleFont(42);
   mainFit1054->SetParameter(0,-0.03793069);
   mainFit1054->SetParError(0,0.004848603);
   mainFit1054->SetParLimits(0,0,0);
   mainFit1054->SetParameter(1,-0.004435469);
   mainFit1054->SetParError(1,0.0001616201);
   mainFit1054->SetParLimits(1,0,0);
   mainFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1054);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("#minus0.00444#pm0.000162");
   pt_LaTex = pt->AddText("#minus0.0379#pm0.00485");
   pt_LaTex = pt->AddText("#minus8.55#pm 1.14");
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
   TLine *line = new TLine(-36,0,-8.551675,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.551675,-0.2058359,-8.551675,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1055 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1055->SetFillColor(19);
   mainFit1055->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1055->SetLineColor(ci);
   mainFit1055->SetLineWidth(2);
   mainFit1055->SetChisquare(1.047158e-13);
   mainFit1055->SetNDF(0);
   mainFit1055->GetXaxis()->SetLabelFont(42);
   mainFit1055->GetXaxis()->SetTitleOffset(1);
   mainFit1055->GetXaxis()->SetTitleFont(42);
   mainFit1055->GetYaxis()->SetLabelFont(42);
   mainFit1055->GetYaxis()->SetTitleFont(42);
   mainFit1055->SetParameter(0,-0.03793069);
   mainFit1055->SetParError(0,0.004848603);
   mainFit1055->SetParLimits(0,0,0);
   mainFit1055->SetParameter(1,-0.004435469);
   mainFit1055->SetParError(1,0.0001616201);
   mainFit1055->SetParLimits(1,0,0);
   mainFit1055->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 175");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
