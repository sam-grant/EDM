void verticalOffset_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec  7 10:39:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375,-0.1800013,3375,0.1873249);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *S0_ThetaY_vs_p__1 = new TH1D("S0_ThetaY_vs_p__1","",12,0,3000);
   S0_ThetaY_vs_p__1->SetBinContent(2,0.003328631);
   S0_ThetaY_vs_p__1->SetBinContent(3,7.178185e-16);
   S0_ThetaY_vs_p__1->SetBinContent(4,1.441465e-15);
   S0_ThetaY_vs_p__1->SetBinContent(5,5.176457e-16);
   S0_ThetaY_vs_p__1->SetBinContent(6,6.480913e-17);
   S0_ThetaY_vs_p__1->SetBinContent(7,-7.567868e-16);
   S0_ThetaY_vs_p__1->SetBinContent(8,-2.584603e-16);
   S0_ThetaY_vs_p__1->SetBinContent(9,4.047662e-16);
   S0_ThetaY_vs_p__1->SetBinContent(10,-2.959115e-16);
   S0_ThetaY_vs_p__1->SetBinContent(11,-3.621652e-16);
   S0_ThetaY_vs_p__1->SetBinContent(12,9.556085e-19);
   S0_ThetaY_vs_p__1->SetBinError(2,0.1332703);
   S0_ThetaY_vs_p__1->SetBinError(3,0.04444242);
   S0_ThetaY_vs_p__1->SetBinError(4,0.02567444);
   S0_ThetaY_vs_p__1->SetBinError(5,0.02110429);
   S0_ThetaY_vs_p__1->SetBinError(6,0.01926599);
   S0_ThetaY_vs_p__1->SetBinError(7,0.01830518);
   S0_ThetaY_vs_p__1->SetBinError(8,0.01801057);
   S0_ThetaY_vs_p__1->SetBinError(9,0.01848968);
   S0_ThetaY_vs_p__1->SetBinError(10,0.01916832);
   S0_ThetaY_vs_p__1->SetBinError(11,0.01909694);
   S0_ThetaY_vs_p__1->SetBinError(12,0.04069422);
   S0_ThetaY_vs_p__1->SetEntries(11);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("S0_ThetaY_vs_p");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 11     ");
   ptstats_LaTex = ptstats->AddText("Mean  =    375");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   S0_ThetaY_vs_p__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(S0_ThetaY_vs_p__1);
   S0_ThetaY_vs_p__1->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S0_ThetaY_vs_p__1->GetXaxis()->CenterTitle(true);
   S0_ThetaY_vs_p__1->GetXaxis()->SetLabelFont(42);
   S0_ThetaY_vs_p__1->GetXaxis()->SetTitleSize(0.04);
   S0_ThetaY_vs_p__1->GetXaxis()->SetTitleOffset(1.1);
   S0_ThetaY_vs_p__1->GetXaxis()->SetTitleFont(42);
   S0_ThetaY_vs_p__1->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   S0_ThetaY_vs_p__1->GetYaxis()->CenterTitle(true);
   S0_ThetaY_vs_p__1->GetYaxis()->SetNdivisions(4000510);
   S0_ThetaY_vs_p__1->GetYaxis()->SetLabelFont(42);
   S0_ThetaY_vs_p__1->GetYaxis()->SetTitleSize(0.04);
   S0_ThetaY_vs_p__1->GetYaxis()->SetTitleOffset(1.15);
   S0_ThetaY_vs_p__1->GetYaxis()->SetTitleFont(42);
   S0_ThetaY_vs_p__1->GetZaxis()->SetLabelFont(42);
   S0_ThetaY_vs_p__1->GetZaxis()->SetTitleOffset(1);
   S0_ThetaY_vs_p__1->GetZaxis()->SetTitleFont(42);
   S0_ThetaY_vs_p__1->Draw("APL");
   
   TH1D *S12S18_ThetaY_vs_p__2 = new TH1D("S12S18_ThetaY_vs_p__2","S12S18_",12,0,3000);
   S12S18_ThetaY_vs_p__2->SetBinContent(2,0.001688427);
   S12S18_ThetaY_vs_p__2->SetBinContent(3,-1.396637e-15);
   S12S18_ThetaY_vs_p__2->SetBinContent(4,-4.891374e-15);
   S12S18_ThetaY_vs_p__2->SetBinContent(5,1.343458e-15);
   S12S18_ThetaY_vs_p__2->SetBinContent(6,-2.975696e-16);
   S12S18_ThetaY_vs_p__2->SetBinContent(7,6.270296e-16);
   S12S18_ThetaY_vs_p__2->SetBinContent(8,2.764155e-16);
   S12S18_ThetaY_vs_p__2->SetBinContent(9,4.444136e-16);
   S12S18_ThetaY_vs_p__2->SetBinContent(10,7.673602e-16);
   S12S18_ThetaY_vs_p__2->SetBinContent(11,3.926041e-16);
   S12S18_ThetaY_vs_p__2->SetBinContent(12,-1.110494e-17);
   S12S18_ThetaY_vs_p__2->SetBinError(2,0.09376772);
   S12S18_ThetaY_vs_p__2->SetBinError(3,0.03148935);
   S12S18_ThetaY_vs_p__2->SetBinError(4,0.01801741);
   S12S18_ThetaY_vs_p__2->SetBinError(5,0.01479962);
   S12S18_ThetaY_vs_p__2->SetBinError(6,0.01359412);
   S12S18_ThetaY_vs_p__2->SetBinError(7,0.0129727);
   S12S18_ThetaY_vs_p__2->SetBinError(8,0.01308734);
   S12S18_ThetaY_vs_p__2->SetBinError(9,0.01384342);
   S12S18_ThetaY_vs_p__2->SetBinError(10,0.0149547);
   S12S18_ThetaY_vs_p__2->SetBinError(11,0.01479692);
   S12S18_ThetaY_vs_p__2->SetBinError(12,0.03458663);
   S12S18_ThetaY_vs_p__2->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   S12S18_ThetaY_vs_p__2->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   S12S18_ThetaY_vs_p__2->SetMarkerColor(ci);
   S12S18_ThetaY_vs_p__2->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12S18_ThetaY_vs_p__2->GetXaxis()->SetLabelFont(42);
   S12S18_ThetaY_vs_p__2->GetXaxis()->SetTitleOffset(1);
   S12S18_ThetaY_vs_p__2->GetXaxis()->SetTitleFont(42);
   S12S18_ThetaY_vs_p__2->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250");
   S12S18_ThetaY_vs_p__2->GetYaxis()->SetLabelFont(42);
   S12S18_ThetaY_vs_p__2->GetYaxis()->SetTitleFont(42);
   S12S18_ThetaY_vs_p__2->GetZaxis()->SetLabelFont(42);
   S12S18_ThetaY_vs_p__2->GetZaxis()->SetTitleOffset(1);
   S12S18_ThetaY_vs_p__2->GetZaxis()->SetTitleFont(42);
   S12S18_ThetaY_vs_p__2->Draw("P SAME");
   
   TLegend *leg = new TLegend(0.25,0.91,0.75,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ThetaY_vs_p","No misaligment","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12S18_ThetaY_vs_p","Misaligment","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
