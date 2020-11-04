void FieldFit_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2056334,45,0.1357403);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1127[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1127[3] = {
   0.07595439,
   -0.1458475,
   -0.02552703};
   Double_t Graph0_fex1127[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1127[3] = {
   0.002890271,
   0.002890264,
   0.002890069};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1127,Graph0_fy1127,Graph0_fex1127,Graph0_fey1127);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 325");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01127 = new TH1F("Graph_Graph01127","Sub-runs 325",100,-36,36);
   Graph_Graph01127->SetMinimum(-0.171496);
   Graph_Graph01127->SetMaximum(0.1016029);
   Graph_Graph01127->SetDirectory(0);
   Graph_Graph01127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01127->SetLineColor(ci);
   Graph_Graph01127->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01127->GetXaxis()->CenterTitle(true);
   Graph_Graph01127->GetXaxis()->SetLabelFont(42);
   Graph_Graph01127->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01127->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01127->GetXaxis()->SetTitleFont(42);
   Graph_Graph01127->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01127->GetYaxis()->CenterTitle(true);
   Graph_Graph01127->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01127->GetYaxis()->SetLabelFont(42);
   Graph_Graph01127->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01127->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01127->GetYaxis()->SetTitleFont(42);
   Graph_Graph01127->GetZaxis()->SetLabelFont(42);
   Graph_Graph01127->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01127);
   
   
   TF1 *mainFit1128 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1128->SetFillColor(19);
   mainFit1128->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1128->SetLineColor(ci);
   mainFit1128->SetLineWidth(2);
   mainFit1128->SetChisquare(7.081605);
   mainFit1128->SetNDF(1);
   mainFit1128->GetXaxis()->SetLabelFont(42);
   mainFit1128->GetXaxis()->SetTitleOffset(1);
   mainFit1128->GetXaxis()->SetTitleFont(42);
   mainFit1128->GetYaxis()->SetLabelFont(42);
   mainFit1128->GetYaxis()->SetTitleFont(42);
   mainFit1128->SetParameter(0,-0.03180661);
   mainFit1128->SetParError(0,0.001668658);
   mainFit1128->SetParLimits(0,0,0);
   mainFit1128->SetParameter(1,-0.003696701);
   mainFit1128->SetParError(1,6.812426e-05);
   mainFit1128->SetParLimits(1,0,0);
   mainFit1128->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1128);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 7.08");
   pt_LaTex = pt->AddText("#minus0.0037#pm6.81e-05");
   pt_LaTex = pt->AddText("#minus0.0318#pm0.00167");
   pt_LaTex = pt->AddText(" #minus8.6#pm0.478");
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
   TLine *line = new TLine(-36,0,-8.604051,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.604051,-0.171496,-8.604051,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1129 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1129->SetFillColor(19);
   mainFit1129->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1129->SetLineColor(ci);
   mainFit1129->SetLineWidth(2);
   mainFit1129->SetChisquare(7.081605);
   mainFit1129->SetNDF(1);
   mainFit1129->GetXaxis()->SetLabelFont(42);
   mainFit1129->GetXaxis()->SetTitleOffset(1);
   mainFit1129->GetXaxis()->SetTitleFont(42);
   mainFit1129->GetYaxis()->SetLabelFont(42);
   mainFit1129->GetYaxis()->SetTitleFont(42);
   mainFit1129->SetParameter(0,-0.03180661);
   mainFit1129->SetParError(0,0.001668658);
   mainFit1129->SetParLimits(0,0,0);
   mainFit1129->SetParameter(1,-0.003696701);
   mainFit1129->SetParError(1,6.812426e-05);
   mainFit1129->SetParLimits(1,0,0);
   mainFit1129->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 325");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
