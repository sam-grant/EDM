void FieldFit_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 12:24:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2042738,45,0.131793);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1079[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1079[4] = {
   0.0720952,
   0.006232284,
   -0.07000184,
   -0.1445759};
   Double_t Graph0_fex1079[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1079[4] = {
   0.003686683,
   0.003686683,
   0.003686683,
   0.003686683};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1079,Graph0_fy1079,Graph0_fex1079,Graph0_fey1079);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 200");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01079 = new TH1F("Graph_Graph01079","Sub-runs 200",100,-36,36);
   Graph_Graph01079->SetMinimum(-0.1706671);
   Graph_Graph01079->SetMaximum(0.09818633);
   Graph_Graph01079->SetDirectory(0);
   Graph_Graph01079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01079->SetLineColor(ci);
   Graph_Graph01079->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01079->GetXaxis()->CenterTitle(true);
   Graph_Graph01079->GetXaxis()->SetLabelFont(42);
   Graph_Graph01079->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01079->GetXaxis()->SetTitleFont(42);
   Graph_Graph01079->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01079->GetYaxis()->CenterTitle(true);
   Graph_Graph01079->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01079->GetYaxis()->SetLabelFont(42);
   Graph_Graph01079->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01079->GetYaxis()->SetTitleFont(42);
   Graph_Graph01079->GetZaxis()->SetLabelFont(42);
   Graph_Graph01079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01079);
   
   
   TF1 *fieldLineFit1080 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1080->SetFillColor(19);
   fieldLineFit1080->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1080->SetLineColor(ci);
   fieldLineFit1080->SetLineWidth(2);
   fieldLineFit1080->SetChisquare(1.928299);
   fieldLineFit1080->SetNDF(2);
   fieldLineFit1080->GetXaxis()->SetLabelFont(42);
   fieldLineFit1080->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1080->GetXaxis()->SetTitleFont(42);
   fieldLineFit1080->GetYaxis()->SetLabelFont(42);
   fieldLineFit1080->GetYaxis()->SetTitleFont(42);
   fieldLineFit1080->SetParameter(0,-0.03406258);
   fieldLineFit1080->SetParError(0,0.001843341);
   fieldLineFit1080->SetParLimits(0,0,0);
   fieldLineFit1080->SetParameter(1,-0.003631238);
   fieldLineFit1080->SetParError(1,8.243673e-05);
   fieldLineFit1080->SetParLimits(1,0,0);
   fieldLineFit1080->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1080);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.964");
   pt_LaTex = pt->AddText("#minus0.00363#pm8.24e-05");
   pt_LaTex = pt->AddText("#minus0.0341#pm0.00184");
   pt_LaTex = pt->AddText("#minus9.38#pm0.508");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Residual B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-9.380431,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-9.380431,-0.1706671,-9.380431,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1081 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1081->SetFillColor(19);
   fieldLineFit1081->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1081->SetLineColor(ci);
   fieldLineFit1081->SetLineWidth(2);
   fieldLineFit1081->SetChisquare(1.928299);
   fieldLineFit1081->SetNDF(2);
   fieldLineFit1081->GetXaxis()->SetLabelFont(42);
   fieldLineFit1081->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1081->GetXaxis()->SetTitleFont(42);
   fieldLineFit1081->GetYaxis()->SetLabelFont(42);
   fieldLineFit1081->GetYaxis()->SetTitleFont(42);
   fieldLineFit1081->SetParameter(0,-0.03406258);
   fieldLineFit1081->SetParError(0,0.001843341);
   fieldLineFit1081->SetParLimits(0,0,0);
   fieldLineFit1081->SetParameter(1,-0.003631238);
   fieldLineFit1081->SetParError(1,8.243673e-05);
   fieldLineFit1081->SetParLimits(1,0,0);
   fieldLineFit1081->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 200");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
