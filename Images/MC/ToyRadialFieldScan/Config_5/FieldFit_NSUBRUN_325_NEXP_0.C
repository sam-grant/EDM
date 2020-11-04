void FieldFit_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2211102,45,0.1485442);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[2] = {
   -30,
   30};
   Double_t Graph0_fy1101[2] = {
   0.08190858,
   -0.1544746};
   Double_t Graph0_fex1101[2] = {
   0,
   0};
   Double_t Graph0_fey1101[2] = {
   0.005026548,
   0.005026548};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 325");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","Sub-runs 325",100,-36,36);
   Graph_Graph01101->SetMinimum(-0.1841447);
   Graph_Graph01101->SetMaximum(0.1115788);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01101->GetXaxis()->CenterTitle(true);
   Graph_Graph01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph01101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph01101->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01101->GetYaxis()->CenterTitle(true);
   Graph_Graph01101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph01101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph01101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01101);
   
   
   TF1 *mainFit1102 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1102->SetFillColor(19);
   mainFit1102->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1102->SetLineColor(ci);
   mainFit1102->SetLineWidth(2);
   mainFit1102->SetChisquare(5.995955e-13);
   mainFit1102->SetNDF(0);
   mainFit1102->GetXaxis()->SetLabelFont(42);
   mainFit1102->GetXaxis()->SetTitleOffset(1);
   mainFit1102->GetXaxis()->SetTitleFont(42);
   mainFit1102->GetYaxis()->SetLabelFont(42);
   mainFit1102->GetYaxis()->SetTitleFont(42);
   mainFit1102->SetParameter(0,-0.03628299);
   mainFit1102->SetParError(0,0.003554306);
   mainFit1102->SetParLimits(0,0,0);
   mainFit1102->SetParameter(1,-0.003939719);
   mainFit1102->SetParError(1,0.0001184769);
   mainFit1102->SetParLimits(1,0,0);
   mainFit1102->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1102);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("#minus0.00394#pm0.000118");
   pt_LaTex = pt->AddText("#minus0.0363#pm0.00355");
   pt_LaTex = pt->AddText("#minus9.21#pm0.944");
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
   TLine *line = new TLine(-36,0,-9.209537,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-9.209537,-0.1841447,-9.209537,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1103 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1103->SetFillColor(19);
   mainFit1103->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1103->SetLineColor(ci);
   mainFit1103->SetLineWidth(2);
   mainFit1103->SetChisquare(5.995955e-13);
   mainFit1103->SetNDF(0);
   mainFit1103->GetXaxis()->SetLabelFont(42);
   mainFit1103->GetXaxis()->SetTitleOffset(1);
   mainFit1103->GetXaxis()->SetTitleFont(42);
   mainFit1103->GetYaxis()->SetLabelFont(42);
   mainFit1103->GetYaxis()->SetTitleFont(42);
   mainFit1103->SetParameter(0,-0.03628299);
   mainFit1103->SetParError(0,0.003554306);
   mainFit1103->SetParLimits(0,0,0);
   mainFit1103->SetParameter(1,-0.003939719);
   mainFit1103->SetParError(1,0.0001184769);
   mainFit1103->SetParLimits(1,0,0);
   mainFit1103->Draw("same");
   
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
