void S0_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_HS_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  1 16:30:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.1412,-0.01040598,3409.454,0.00407201);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1070[11] = {
   451.647,
   653.2691,
   879.9271,
   1123.054,
   1371.406,
   1620.739,
   1868.003,
   2116.569,
   2363.182,
   2615.294,
   2789.557};
   Double_t Graph0_fy1070[11] = {
   0.0007436363,
   0.0009516483,
   0.001112945,
   0.001218159,
   0.002192359,
   0.001816372,
   0.001626041,
   0.002106952,
   0.001334118,
   0.001347729,
   -0.002267592};
   Double_t Graph0_fex1070[11] = {
   0.1393887,
   0.1178843,
   0.08603329,
   0.08412219,
   0.08954517,
   0.09886073,
   0.113464,
   0.1373979,
   0.1719514,
   0.2153495,
   0.2483519};
   Double_t Graph0_fey1070[11] = {
   0.001051318,
   0.0004005742,
   0.0002840616,
   0.0002570381,
   0.0002982986,
   0.0002574138,
   0.0003700341,
   0.0004475364,
   0.0004781065,
   0.0007621017,
   -0.002234869};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1070,Graph0_fy1070,Graph0_fex1070,Graph0_fey1070);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01070 = new TH1F("Graph_Graph01070","S0_",100,217.6779,3023.635);
   Graph_Graph01070->SetMinimum(-0.008958178);
   Graph_Graph01070->SetMaximum(0.002624211);
   Graph_Graph01070->SetDirectory(0);
   Graph_Graph01070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01070->SetLineColor(ci);
   Graph_Graph01070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01070->GetXaxis()->SetRange(0,101);
   Graph_Graph01070->GetXaxis()->CenterTitle(true);
   Graph_Graph01070->GetXaxis()->SetLabelFont(42);
   Graph_Graph01070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01070->GetXaxis()->SetTitleFont(42);
   Graph_Graph01070->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01070->GetYaxis()->CenterTitle(true);
   Graph_Graph01070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01070->GetYaxis()->SetLabelFont(42);
   Graph_Graph01070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01070->GetYaxis()->SetTitleFont(42);
   Graph_Graph01070->GetZaxis()->SetLabelFont(42);
   Graph_Graph01070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01070);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
